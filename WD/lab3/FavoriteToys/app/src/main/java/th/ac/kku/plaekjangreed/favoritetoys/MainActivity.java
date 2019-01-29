package th.ac.kku.plaekjangreed.favoritetoys;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Gravity;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    TextView tvGreen ;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.content_main);


        tvGreen = (TextView) findViewById(R.id.green);
        tvGreen.setText(R.string.green_name);
        tvGreen.setGravity(Gravity.CENTER);
    }
}