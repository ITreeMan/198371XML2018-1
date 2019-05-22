package th.ac.kku.plaekjangreed.anusorn.downloadupload;

import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.support.annotation.NonNull;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
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
    private static final String TAG = "FileUpload";
    private static int RESULT_LOAD_IMAGE = 1;



    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button buttonLoadImage = (Button) findViewById(R.id.buttonLoadPicture);
        buttonLoadImage.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {

                Intent i = new Intent(
                        Intent.ACTION_PICK,
                        android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI);

                startActivityForResult(i, RESULT_LOAD_IMAGE);
            }
        });
        mStorageRef = FirebaseStorage.getInstance().getReference();
    }


    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == RESULT_LOAD_IMAGE && resultCode == RESULT_OK && null != data) {
            Uri selectedImage = data.getData();
            Toast.makeText(MainActivity.this,
                    "img is " + selectedImage.getLastPathSegment(), Toast.LENGTH_LONG).show();

            String[] filePathColumn = {MediaStore.Images.Media.DATA};

            Cursor cursor = getContentResolver().query(selectedImage,
                    filePathColumn, null, null, null);
            cursor.moveToFirst();

            int columnIndex = cursor.getColumnIndex(filePathColumn[0]);
            final String picturePath = cursor.getString(columnIndex);
            Toast.makeText(MainActivity.this,
                    "picture path is " + picturePath, Toast.LENGTH_LONG).show();

            cursor.close();

            TextView tvChosenfile = (TextView) findViewById(R.id.buttonLoadPicture);
//            tvChosenfile.setText(picturePath);
            verifyStoragePermissions(MainActivity.this);

            ImageView imageView = (ImageView) findViewById(R.id.imgView);
            imageView.setImageBitmap(BitmapFactory.decodeFile(picturePath));
            Button button = (Button) findViewById(R.id.upload_b);
            button.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    uploadFile(picturePath);
                }
            });

        }

    }


    public void uploadFile(final String fileName) {
        final TextView textViewResult = (TextView) findViewById(R.id.tv_result_upload);
        Uri file = Uri.fromFile(new File(fileName));

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