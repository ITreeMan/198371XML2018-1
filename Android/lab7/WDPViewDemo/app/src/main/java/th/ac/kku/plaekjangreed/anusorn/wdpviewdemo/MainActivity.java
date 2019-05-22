package th.ac.kku.plaekjangreed.anusorn.wdpviewdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    int FirstNum;
    int SecondNum;
    int ResultSum;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void addButtonClicked(View view) {
        EditText EditTextFirst = (EditText) findViewById(R.id.first_num);
        EditText EditTextSecond = (EditText) findViewById(R.id.second_num);
        TextView TextResult = (TextView) findViewById(R.id.tv_sum_num);
        FirstNum = Integer.parseInt(EditTextFirst.getText().toString());
        SecondNum = Integer.parseInt(EditTextSecond.getText().toString());
        ResultSum = FirstNum + SecondNum;
        TextResult.setText(String.valueOf(ResultSum));
    }
}