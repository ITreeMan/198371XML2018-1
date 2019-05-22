package th.ac.kku.plaekjangreed.anusorn.explicitintent;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;


public class MainActivity extends AppCompatActivity {

    private static final int REQUEST_CODE = 10;
    Spinner spinner ;
    Button button ;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        spinner = (Spinner) findViewById(R.id.spinner);
        ArrayAdapter adapter = ArrayAdapter.createFromResource(this, R.array.intents, android.R.layout.simple_spinner_item);
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(adapter);
        button = findViewById(R.id.trigger);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
               public void onClick(View v) {
                int pos = spinner.getSelectedItemPosition();
                Intent intent = null;
                switch (pos) {
                    case 0:
                        intent = new Intent(Intent.ACTION_VIEW,
                                Uri.parse("http://www.kku.ac.th"));
                        break;
                    case 1:
                        intent = new Intent(Intent.ACTION_DIAL,
                                Uri.parse("tel:(+43)009700"));
                        break;
                    case 2:
                        intent = new Intent(Intent.ACTION_VIEW,
                                Uri.parse("geo:0.0?q=Khon Kaen University"));
                        break;
                    case 3:
                        intent = new Intent(Intent.ACTION_VIEW,
                                Uri.parse("content://contacts/people"));
                        break;
                }
                if (intent != null) {
                    startActivity(intent);
                }
            }
        });
    }



    public void okButtonClicked(View view) {
        EditText EditText = (EditText) findViewById(R.id.editText);
        // To do 1. create new intent
        Intent intent = new Intent(MainActivity.this, ResultActivity.class);
        // To do 2. put extra value with the intent
        String name = String.valueOf(EditText.getText());
        intent.putExtra("pass", name);
        // To do 3. use startActivityForResult with REQUEST_CODE
        startActivityForResult(intent, REQUEST_CODE);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (resultCode == RESULT_OK && requestCode == REQUEST_CODE) {
            // Todo 1. get data from ResultActivity
            TextView tv = findViewById(R.id.result);
            // Todo 2. set the value of TextView with the received data
            String text = data.getStringExtra("passText");
            tv.setText(text);
        }
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
//        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
//        int id = item.getItemId();
//
//        //noinspection SimplifiableIfStatement
//        if (id == R.id.action_settings) {
//            return true;
//        }
//
        return super.onOptionsItemSelected(item);
    }
}
