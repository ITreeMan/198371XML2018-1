package th.ac.kku.plaekjangreed.anusorn.testfirebase;

import android.content.Intent;
import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.ChildEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.util.HashMap;
import java.util.Map;

public class Main2Activity extends AppCompatActivity {


    private FirebaseAuth mAuth;
    String TAG = "1234" ;
    TextView textView ;
    private Button logOut ;
    private FirebaseDatabase database ;
    private   DatabaseReference myRef;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        textView = (TextView) findViewById(R.id.tv);
        FirebaseUser user = FirebaseAuth.getInstance().getCurrentUser();

        if (user != null) {
            // Name, email address, and profile photo Url
            String email = user.getEmail();


            logOut = (Button)findViewById(R.id.logOut);
            // Check if user's email is verified
            boolean emailVerified = user.isEmailVerified();

            // The user's ID, unique to the Firebase project. Do NOT use this value to
            // authenticate with your backend server, if you have one. Use
            // FirebaseUser.getToken() instead.
            String uid = user.getUid();

            textView.setText(email + " is logged in successfully.");

            ((Button)findViewById(R.id.logOut)).setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    FirebaseAuth.getInstance().signOut();
                    onBackPressed();
                    Intent toMain1 = new Intent(Main2Activity.this, MainActivity.class);
                    startActivity(toMain1);
                }
            });
        }

        database = FirebaseDatabase.getInstance();
        myRef = database.getReference("message");

        // readDB();
        //  writeDB();

        writeNewUser("Plaekjang","Anusorn","p_anusorn@kkumail.com");
        readNewUser();
    }
    private void writeDB(){
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("message");

        myRef.setValue("Hello, World!");
    }

    private void readDB(){
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("message");
        myRef.addValueEventListener(new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                // This method is called once with the initial value and again
                // whenever data at this location is updated.
                String value = dataSnapshot.getValue(String.class);
                Log.d(TAG, "Value is: " + value);
                Toast.makeText(Main2Activity.this,"" +
                        "Value is " + value, Toast.LENGTH_LONG).show();
            }

            @Override
            public void onCancelled(DatabaseError error) {
                // Failed to read value
                Log.w(TAG, "Failed to read value.", error.toException());
            }
        });
    }


    private void writeNewUser(String useId,String name,String email){
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("message");
        String key = myRef.child("users").push().getKey();
        User user = new User(name,email);
        Map<String, Object> userValues = user.toMap();
        Map<String,Object> childUpdates = new HashMap<>();

        Log.w("user",user.toString());
        Log.w("userValues",userValues.toString());
        Log.w("childUpdates",childUpdates.toString());

        childUpdates.put("/users/" + useId,userValues);
        myRef.updateChildren(childUpdates);
    }

    private void readNewUser(){
        final FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("message");
        myRef.child("users").addChildEventListener(new ChildEventListener() {
            @Override
            public void onChildAdded(DataSnapshot dataSnapshot, String s) {
                User user = dataSnapshot.getValue(User.class);
                Toast.makeText(Main2Activity.this,
                        "Username is " + user.toMap().get("username"),
                        Toast.LENGTH_LONG).show();
            }

            @Override
            public void onChildChanged(DataSnapshot dataSnapshot, String s) {
                User user = dataSnapshot.getValue(User.class);
                Toast.makeText(Main2Activity.this,
                        "Email is " + user.toMap().get("email"),
                        Toast.LENGTH_LONG).show();
            }

            @Override
            public void onChildRemoved(DataSnapshot dataSnapshot) {

            }

            @Override
            public void onChildMoved(DataSnapshot dataSnapshot, String s) {

            }

            @Override
            public void onCancelled(DatabaseError databaseError) {

            }
        });
    }
}
