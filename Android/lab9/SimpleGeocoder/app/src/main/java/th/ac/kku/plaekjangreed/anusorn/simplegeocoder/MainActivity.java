package th.ac.kku.plaekjangreed.anusorn.simplegeocoder;

import android.content.Context;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

import java.io.IOException;
import java.util.List;
import java.util.Locale;

public class MainActivity extends AppCompatActivity {

    EditText latitudeEdit, longitudeEdit,addrEt;
    TextView infoText;
    RadioGroup radioGroup;
    RadioButton latLng , fromAddr ;
    private String TAG;
    int mode ;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        radioGroup = (RadioGroup)findViewById(R.id.rdGroup);
        latLng = (RadioButton)findViewById(R.id.latLng);
        fromAddr = (RadioButton)findViewById(R.id.frmAddr);
        latitudeEdit = (EditText) findViewById(R.id.latitudeEdit);
        longitudeEdit = (EditText) findViewById(R.id.longitudeEdit);
        addrEt = (EditText)findViewById(R.id.addrEdit);
        infoText = (TextView) findViewById(R.id.infoText);
        addrEt.setEnabled(false);
        TAG = this.getLocalClassName();
        checkRg();
    }

    public void onButtonClicked(View view) {
        Location loc = new Location("");
        loc.setLatitude(Double.parseDouble(latitudeEdit.getText().toString()));
        loc.setLongitude(Double.parseDouble(longitudeEdit.getText().toString()));

        String toGeo = addrEt.getText().toString() ;
        if(latLng.isChecked() ){
            getAddressFromLocation(loc,this,new GeocoderHandler());
        }else{
            getAddressFromName(toGeo,this,new GeocoderHandler());
        }
    }
    private final class GeocoderHandler extends Handler {
        @Override
        public void handleMessage(Message message) {
            String result;
            Bundle bundle;
            switch (message.what) {
                case 1:
                    bundle = message.getData();
                    result = bundle.getString("addressFromName");
                    break;
                case 2:
                    bundle = message.getData();
                    result = bundle.getString("addressFromLoc");
                    break;
                default:
                    result = null;
            }
            // replace by what you need to do
            infoText.setText(result);
        }
    }


    public void checkRg(){
        radioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                if(latLng.isChecked()){
                    latitudeEdit.setEnabled(true);
                    longitudeEdit.setEnabled(true);
                    addrEt.setEnabled(false);
                    latitudeEdit.requestFocus();
                    mode = 1 ;
                }else{
                    latitudeEdit.setEnabled(false);
                    longitudeEdit.setEnabled(false);
                    addrEt.setEnabled(true);
                    addrEt.requestFocus();
                    mode = 2 ;
                }
            }
        });
    }

    public void getAddressFromLocation(final Location location, final Context context, final Handler handler) {
        Thread thread = new Thread() {
            @Override
            public void run() {
                Geocoder geocoder = new Geocoder(context, Locale.getDefault());
                String result = null;
                try {
                    List<Address> list = geocoder.getFromLocation(
                            location.getLatitude(), location.getLongitude(), 1);
                    if (list != null && list.size() > 0) {
                        Address address = list.get(0);
                        result = address.getAddressLine(0) + ", "
                                + address.getLocality();
                    }
                } catch (IOException e) {
                    Log.e(TAG, "Impossible to connect to Geocoder", e);
                } finally {
                    Message msg = Message.obtain();
                    msg.setTarget(handler);
                    if (result != null) {
                        msg.what = 2;
                        Bundle bundle = new Bundle();
                        bundle.putString("addressFromLoc", result);
                        msg.setData(bundle);
                    } else
                        msg.what = 0;
                    msg.sendToTarget();
                }
            }
        };
        thread.start();
    }

    public void getAddressFromName(final String addr, final Context contex, final Handler handler){
        Thread thread = new Thread() {
            @Override
            public void run() {
                Geocoder geocoder = new Geocoder(MainActivity.this,Locale.getDefault());
                String result = null;
                try {
                    List<Address> list = geocoder.getFromLocationName(addr,1);
                    if (list != null && list.size() > 0) {
                        Address address = list.get(0);
                        result = "Lat:" + address.getLatitude()+ " Lng:" + address.getLongitude();
                    }
                } catch (IOException e) {
                    Log.e(TAG, "Impossible to connect to Geocoder", e);
                } finally {
                    Message msg = Message.obtain();
                    msg.setTarget(handler);
                    if (result != null) {
                        msg.what = 1;
                        Bundle bundle = new Bundle();
                        bundle.putString("addressFromName", result);
                        msg.setData(bundle);
                    } else
                        msg.what = 0;
                    msg.sendToTarget();
                }
            }
        };
        thread.start();
    }
}
