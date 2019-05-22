package th.ac.kku.plaekjangreed.anusorn;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.widget.TextView;

import com.example.wdp1.R;


public class Main2Activity extends AppCompatActivity {
    String getName;
    String getPhone;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        TextView showOutput = (TextView) findViewById(R.id.textView);
        Intent intent = getIntent();
        getName = intent.getStringExtra("Name");
        getPhone = intent.getStringExtra("Phone");
        showOutput.setText(getName +" "+ getString(R.string.has_text)+" "+ getPhone);
    }
}
