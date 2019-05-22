package th.ac.kku.plaekjangreed.anusorn.nationsapicaller;
import android.os.AsyncTask;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ProgressBar;
import android.widget.TextView;

import org.json.JSONArray;
import org.json.JSONObject;
import org.json.JSONTokener;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class MainActivity extends AppCompatActivity {
    ProgressBar progressBar;
    TextView responseView;
    String urlVal;
    EditText urlTxt;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        progressBar = (ProgressBar) findViewById(R.id.progressBar);
        responseView = (TextView) findViewById(R.id.responseView);
        urlTxt = (EditText) findViewById(R.id.urlText);
        Button queryBt = (Button) findViewById(R.id.queryButton);
        queryBt.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                new RetrieveFeedTask().execute();
            }
        });
    }

    class RetrieveFeedTask extends AsyncTask<Void, Void, String> {

        private Exception exception;

        protected void onPreExecute() {
            progressBar.setVisibility(View.VISIBLE);
            responseView.setText("");
        }

        protected String doInBackground(Void... urls) {
            try {
                urlVal = urlTxt.getText().toString();
                Log.i("INFO", "url = " + urlVal);
                URL urlAddr;
               /* if (urlVal.startsWith("http:")) {
                    urlAddr = new URL(urlVal);
                } else {
                    urlAddr = new URL("https://maps.googleapis.com/maps/api/geocode/json?address="
                    + urlVal + "&key=AIzaSyBmCzp8s_2kz69bojxDIsXfv4BmaRpvK7g");
                } */
                urlAddr = new URL(urlVal);
                HttpURLConnection urlConnection = (HttpURLConnection) urlAddr.openConnection();
                try {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(urlConnection.getInputStream()));
                    StringBuilder stringBuilder = new StringBuilder();
                    String line;
                    while ((line = bufferedReader.readLine()) != null) {
                        stringBuilder.append(line).append("\n");
                    }
                    bufferedReader.close();
                    return stringBuilder.toString();
                }
                finally{
                    urlConnection.disconnect();
                }
            }
            catch(Exception e) {
                Log.e("ERROR", e.getMessage(), e);
                return null;
            }
        }

        protected void onPostExecute(String response) {
            if(response == null) {
                response = "THERE WAS AN ERROR";
            }
            progressBar.setVisibility(View.GONE);
            Log.i("INFO", " response = " + response);
            try {
                if (urlVal.equals("https://fb.kku.ac.th/krunapon/json/iptest.json")) {
                    JSONObject object = (JSONObject) new JSONTokener(response).nextValue();
                    String ip = object.getString("ip");
                    responseView.setText(ip);
                }else if(urlVal.equals("https://fb.kku.ac.th/krunapon/json/nations.json")){
                    JSONObject object = (JSONObject) new JSONTokener(response).nextValue();
                    JSONArray  arrayNation  =  object.getJSONArray("nations");
                    String show = "";
                    for(int i=0 ; i<arrayNation.length() ; i++){
                        JSONObject nation = (JSONObject) arrayNation.get(i);
                        String nameNation = nation.getString("name") ;
                        String locationNation = nation.getString("location");
                        show += nameNation + " is in " + locationNation + "\n" ;

                    }
                    responseView.setText(show);
                }
                else {
                    responseView.setText(response);
                }

                /* else if (urlVal.contains("http")) {
                    responseView.setText(response);
                } else {
                    JSONObject object = (JSONObject) new JSONTokener(response).nextValue();
                    JSONArray results = object.getJSONArray("results");
                    JSONObject result = (JSONObject) results.get(0);
                    JSONObject geometry = (JSONObject) result.get("geometry");
                    JSONObject location = (JSONObject) geometry.get("location");
                    String lat = location.getString("lat");
                    String lng = location.getString("lng");
                    responseView.setText("Latititude of " + urlVal + " is " + lat
                    + "\n Longitude of " + urlVal + " is " + lng);
                } */
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

}