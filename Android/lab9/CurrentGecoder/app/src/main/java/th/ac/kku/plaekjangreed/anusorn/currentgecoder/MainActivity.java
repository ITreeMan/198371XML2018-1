package th.ac.kku.plaekjangreed.anusorn.currentgecoder;

import android.Manifest;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.pm.PackageManager;
import android.location.Address;
import android.location.Geocoder;
import android.location.Location;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.annotation.NonNull;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
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

import com.google.android.gms.location.LocationListener;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.Marker;
import com.google.android.gms.maps.model.MarkerOptions;

public class MainActivity extends AppCompatActivity implements GoogleApiClient.ConnectionCallbacks,GoogleApiClient.OnConnectionFailedListener ,LocationListener {

    EditText latitudeEdit, longitudeEdit,addrEt;
    TextView infoText;
    RadioGroup radioGroup;
    RadioButton latLng , fromAddr ;
    private String TAG;
    int mode, start ;
    TextView latitude , longtitude ,showLat ,showLong ;
    private GoogleMap mMap;
    private GoogleApiClient mGoogleApiClient;
    private LocationRequest mLocationRequest;
    private Location mLastLocation;
    private GoogleMap mGoogleMap;
    private Marker mCurrLocationMarker;
    public static final int MY_PERMISSIONS_REQUEST_LOCATION = 99;


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
        checkLocationPermission();
        buildGoogleApiClient();
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
            if (start == 1) {
                addrEt.setText(result);
                start = 0;
            } else {
                infoText.setText(result);
            }
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


    protected synchronized void buildGoogleApiClient()
    {
        mGoogleApiClient = new
                GoogleApiClient.Builder(this).addConnectionCallbacks(this).addOnConnectionFailedListener(this).addApi(LocationServices.API).build();
        mGoogleApiClient.connect();
    }

    @Override
    public void onConnected(Bundle bundle) {
        mLocationRequest = LocationRequest.create().setPriority(LocationRequest.PRIORITY_BALANCED_POWER_ACCURACY).setInterval(10 * 1000).setFastestInterval(1 * 1000);
        mLocationRequest = new LocationRequest();
        mLocationRequest.setInterval(1000);
        mLocationRequest.setFastestInterval(1000);
        mLocationRequest.setPriority(LocationRequest.PRIORITY_BALANCED_POWER_ACCURACY);
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) == PackageManager.PERMISSION_GRANTED) {
            LocationServices.FusedLocationApi.requestLocationUpdates(mGoogleApiClient, mLocationRequest, this);
        }
    }

    @Override
    public void onConnectionSuspended(int i) {

    }

    @Override
    public void onPointerCaptureChanged(boolean hasCapture) {

    }

    @Override
    public void onConnectionFailed(@NonNull ConnectionResult connectionResult) {

    }


    @Override
    public void onLocationChanged(Location location) {

        if (mCurrLocationMarker != null) {
            mCurrLocationMarker.remove();
        }
        latitudeEdit.setText(String.valueOf(location.getLatitude()));
        longitudeEdit.setText(String.valueOf(location.getLongitude()));
        Location loc = new Location("");
        loc.setLatitude(Double.parseDouble(latitudeEdit.getText().toString()));
        loc.setLongitude(Double.parseDouble(longitudeEdit.getText().toString()));
        getAddressFromLocation(loc, this, new GeocoderHandler());
    }

    private void checkLocationPermission() {
        if (ContextCompat.checkSelfPermission(this,
                Manifest.permission.ACCESS_FINE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) {
            if  (ActivityCompat.shouldShowRequestPermissionRationale(this,Manifest.permission.ACCESS_FINE_LOCATION)) {
                new AlertDialog.Builder(this)
                        .setTitle("Location Permission Needed")
                        .setMessage("This app needs the Location permission, please accept to use location functionality")
                        .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialogInterface, int i) {
                                ActivityCompat.requestPermissions(MainActivity.this,
                                        new String[]{Manifest.permission.ACCESS_FINE_LOCATION}, MY_PERMISSIONS_REQUEST_LOCATION );
                            }
                        })
                        .create()
                        .show();
            } else
            {
                ActivityCompat.requestPermissions(this,new String[]{Manifest.permission.ACCESS_FINE_LOCATION},MY_PERMISSIONS_REQUEST_LOCATION );
            }
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode,String permissions[], int[] grantResults) {
        switch (requestCode) {
            case MY_PERMISSIONS_REQUEST_LOCATION: {
                if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                    if (ContextCompat.checkSelfPermission(this,Manifest.permission.ACCESS_FINE_LOCATION) == PackageManager.PERMISSION_GRANTED) {
                        if (mGoogleApiClient == null) {
                            buildGoogleApiClient();
                        }
                        mGoogleMap.setMyLocationEnabled(true);
                    }
                } else
                {
                    Toast.makeText(this, "permission denied", Toast.LENGTH_LONG).show();
                }
                return;
            }
        }
    }
}