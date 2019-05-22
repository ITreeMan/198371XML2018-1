package th.ac.kku.plaekjangreed.anusorn.cloudstorage;

import android.app.Activity;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.support.annotation.NonNull;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.gms.tasks.OnFailureListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.storage.FileDownloadTask;
import com.google.firebase.storage.FirebaseStorage;
import com.google.firebase.storage.StorageReference;
import com.google.firebase.storage.UploadTask;

import java.io.File;

public class MainActivity extends AppCompatActivity {

    private StorageReference mStorageRef;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final TextView textViewResult = (TextView) findViewById(R.id.tv_result_upload);
        mStorageRef = FirebaseStorage.getInstance().getReference();
        textViewResult.setText("");
        verifyStoragePermissions(MainActivity.this);
        //Uri file = Uri.fromFile(new File("/data/data/th.ac.kku.coe.wdp.firebasestorage/shared_prefs/com.google.android.gms.appid.xml"));
        Uri file = Uri.fromFile(new File("/sdcard/DCIM/Camera/IMG_20190407_132627.jpg"));

        StorageReference riversRef = mStorageRef.child("images/" + file.getLastPathSegment());

        UploadTask uploadTask = riversRef.putFile(file);

        Toast.makeText(MainActivity.this, "file is " + file.toString(),
                Toast.LENGTH_LONG).show();
        Log.d("Kanda", "file is " + file.toString());
        textViewResult.append("file is " + file.toString() + "last segment " +
                file.getLastPathSegment());
        uploadTask
                .addOnSuccessListener(new OnSuccessListener<UploadTask.TaskSnapshot>() {
                    @Override
                    public void onSuccess(UploadTask.TaskSnapshot taskSnapshot) {
                        // Get a URL to the uploaded content
                        Task<Uri> downloadUrl = taskSnapshot.getStorage().getDownloadUrl();
                        Toast.makeText(MainActivity.this,
                                "Download url is " + downloadUrl.toString(),
                                Toast.LENGTH_LONG).show();
                        textViewResult.append("\nDownload url is " +
                                downloadUrl.toString());
                    }
                })
                .addOnFailureListener(new OnFailureListener() {
                    @Override
                    public void onFailure(@NonNull Exception exception) {
                        Toast.makeText(MainActivity.this,
                                "Fail", Toast.LENGTH_LONG).show();
                        textViewResult.append("\nFail because " +
                                exception.toString());
                    }
                });


        try {
            riversRef = mStorageRef.child("images/test.jpg");
            final File localFile = File.createTempFile("images", "jpg");
            riversRef.getFile(localFile)
                    .addOnSuccessListener(new OnSuccessListener<FileDownloadTask.TaskSnapshot>() {
                        @Override
                        public void onSuccess(FileDownloadTask.TaskSnapshot taskSnapshot) {
                            Toast.makeText(MainActivity.this,
                                    "downloaded file is  " + localFile.getAbsolutePath(),
                                    Toast.LENGTH_LONG).show();
                            textViewResult.append("\n"+"downloaded file is  " + localFile.getAbsolutePath());
                            textViewResult.append("\n"+"downloaded file is  " + localFile.getAbsolutePath());
                        }
                    }).addOnFailureListener(new OnFailureListener() {
                @Override
                public void onFailure(@NonNull Exception exception) {
                    Toast.makeText(MainActivity.this,
                            "Fail in download file " + localFile.getName(),
                            Toast.LENGTH_LONG).show();
                    textViewResult.append("Fail in download file " + localFile.getName());
                }
            });
        } catch (Exception ex) {
            Toast.makeText(MainActivity.this, ex.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    // Storage Permissions
    private static final int REQUEST_EXTERNAL_STORAGE = 1;
    private static String[] PERMISSIONS_STORAGE = {
            android.Manifest.permission.READ_EXTERNAL_STORAGE,
            android.Manifest.permission.WRITE_EXTERNAL_STORAGE
    };

    /**
     * Checks if the app has permission to write to device storage
     *
     * If the app does not has permission then the user will be prompted to grant permissions
     *
     * @param activity
     */
    public static void verifyStoragePermissions(Activity activity) {
        // Check if we have write permission
        int permission = ActivityCompat.checkSelfPermission(activity,
                android.Manifest.permission.WRITE_EXTERNAL_STORAGE);

        if (permission != PackageManager.PERMISSION_GRANTED) {
            // We don't have permission so prompt the user
            ActivityCompat.requestPermissions(
                    activity,
                    PERMISSIONS_STORAGE,
                    REQUEST_EXTERNAL_STORAGE
            );
        }
    }




}