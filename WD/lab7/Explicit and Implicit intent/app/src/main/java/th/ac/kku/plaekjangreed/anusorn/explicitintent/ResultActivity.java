package th.ac.kku.plaekjangreed.anusorn.explicitintent;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.EditText;
import android.widget.TextView;


public class ResultActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_result);
        setIntentData();
    }

    public void setIntentData() {
        Bundle extras = getIntent().getExtras();
        String inputString = extras.getString("pass");
        TextView view = (TextView) findViewById(R.id.textView);
        view.setText(inputString);
    }

    @Override
    public void finish() {
        // TODO 1 create new Intent
//        Intent intent = new Intent(Intent.ACTION_SEND);
        Intent intent = new Intent();
        // TODO 2 read the data of the EditText field
        // with the id returnValue
        EditText editText = findViewById(R.id.returnValue);
        // TODO 3 put the text from EditText
        // as String extra into the intent
        intent.putExtra("passText",editText.getText().toString());
        // return the Intent to the application
        setResult(RESULT_OK, intent);
        super.finish();

    }
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
//        getMenuInflater().inflate(R.menu.menu_hello_intents, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
//        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
//        if (id == R.id.action_settings) {
//            return true;
//        }

        return super.onOptionsItemSelected(item);
    }
}