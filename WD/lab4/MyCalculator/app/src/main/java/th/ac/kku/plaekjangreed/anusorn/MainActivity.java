package th.ac.kku.plaekjangreed.anusorn;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.Gravity;
import android.view.View;
import android.view.WindowManager;
import android.view.inputmethod.EditorInfo;
import android.widget.Button;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import java.text.NumberFormat;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    Switch swOnOff ;
    TextView tvAns ;
    EditText  getNum1, getNum2 ;
    float val1 =0 , val2 =0 ,valAns =0;
    Button calButt ;
    RadioGroup radioGroup ;
    RadioButton rdPlus , rdMinus , rdMultiplie, rdDiv ;
    Toast toast ;
    Long start=null, stop=null ;
    Double timeCurrent = null ;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tvAns = (TextView) findViewById(R.id.ans);
        getNum1 = (EditText) findViewById(R.id.num1);
        getNum2 = (EditText) findViewById(R.id.num2);
        radioGroup = (RadioGroup) findViewById(R.id.radGroup);
        calButt = (Button) findViewById(R.id.calButton);
        rdPlus = (RadioButton) findViewById(R.id.plus);
        rdMinus = (RadioButton) findViewById(R.id.minus);
        rdMultiplie = (RadioButton) findViewById(R.id.multipile);
        rdDiv = (RadioButton) findViewById(R.id.divide);
        calButt.setOnClickListener(MainActivity.this);
        radioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int i) {
                calculate(i);
            }
        });
        clickedSwitch();
        getSize();

    }

    private void acceptNumbers(){
        start = System.currentTimeMillis();
        try {
            val1 = Float.parseFloat(getNum1.getText().toString());
            val2 = Float.parseFloat(getNum2.getText().toString());

        }
        catch (NumberFormatException nf){
            showToast("Please enter only a number");
        }
    }

    public void clickedSwitch(){
        swOnOff =(Switch)findViewById(R.id.switchOnOff);
        swOnOff.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean on) {
                if(on){
                    swOnOff.setText(R.string.switchOn);
                } else {
                    swOnOff.setText(R.string.switchOff);
                }
            }
        });
    }

    @Override
    public void onClick(View v) {
        if (v == calButt){
            calculate(radioGroup.getCheckedRadioButtonId());
        }
        if (v == swOnOff){
            clickedSwitch();
        }
    }

    private void showToast(String msg){
        toast = Toast.makeText(MainActivity.this,msg,Toast.LENGTH_LONG);
        toast.setGravity(Gravity.CENTER,0,0);
        toast.show();
    }

    private void calculate(int i) {
        acceptNumbers();

        if (i == R.id.plus){
            valAns = val1 + val2 ;
        } else if (i == R.id.minus){
            valAns = val1 - val2 ;
        } else if (i == R.id.multipile){
            valAns = val1 * val2 ;
        } else if (i == R.id.divide){
//            try{
//                valAns = val1 / val2;
//            }catch (ArithmeticException nz){
//                showToast("Please divide by a non-ZERO number");
//            }
            if (val2 != 0){
                valAns = val1 / val2 ;
            }
            else  {
                showToast("Please divide by a non-ZERO number");
            }
        }
        stop = System.currentTimeMillis();
        timeCurrent = Double.valueOf( stop - start);
        Log.d("Calculation", "computation time = " + timeCurrent);
        Log.d("start", " time = " + start);
        Log.d("stop", " stop = " + stop);
        tvAns.setText(" = " + valAns);
    }

    private class OnCheckedChangeListener {

    }

    public void getSize(){
        WindowManager windowManager = this.getWindowManager();
        Display display = windowManager.getDefaultDisplay();

        DisplayMetrics displayMetrics = new DisplayMetrics();
        if (Build.VERSION.SDK_INT>= Build.VERSION_CODES.JELLY_BEAN_MR1){
            display.getRealMetrics(displayMetrics);
        }

        int hieght = displayMetrics.heightPixels;
        int width = displayMetrics.widthPixels;

        DisplayMetrics dispM = new DisplayMetrics();
        display.getMetrics(dispM);

        int disHeight = dispM.heightPixels;
        int disWidth = dispM.widthPixels;

        showToast("width = " + width + " hieght = " + hieght);
    }
}