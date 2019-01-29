package th.ac.kku.plaekjangreed.anusorn;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import com.example.wdp1.R;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button buttonClick = (Button) findViewById(R.id.submitButton);
        final EditText getName = (EditText) findViewById(R.id.nameInput) ;
        final EditText getPhone = (EditText) findViewById(R.id.phoneInput);

        buttonClick.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, Main2Activity.class);
                intent.putExtra("Name",getName.getText().toString());
                intent.putExtra("Phone", getPhone.getText().toString());
                startActivity(intent);
            }
        });
    }
}