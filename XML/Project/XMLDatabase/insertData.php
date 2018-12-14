<?php

    require'./contactDB.php';


    //Name
    $g_name =$_POST['g_name'];
    $p_type =$_POST['p_type'];
    $c_name =$_POST['c_name'];

    //address
    $address =$_POST['address'];
    $province =$_POST['province'];
    $zipcode =$_POST['zipcode'];
    $locate =$_POST['locate'];

    //descriptioniption
    $description =$_POST['description'];

    //Contact
    $tel =$_POST['tel'];
    $web =$_POST['web'];
    $email =$_POST['email'];
    $face =$_POST['face'];
    $twitter =$_POST['twitter'];
    $line =$_POST['line'];


    
    //set for upload picture 
    $ext_one = pathinfo(basename($_FILES['pro_image_one']['name']), PATHINFO_EXTENSION);
    $new_image_name_one = 'img_'.uniqid().".".$ext_one;
    $image_path_one = "picInput/";
    $upload_path_one = $image_path_one.$new_image_name_one;
    $success_one = move_uploaded_file($_FILES['pro_image_one']['tmp_name'], $upload_path_one);
    
    if($success_one===FALSE){
        echo "error". mysqli_error($con);
        exit();
    }

    

    $ext_two = pathinfo(basename($_FILES['pro_image_two']['name']), PATHINFO_EXTENSION);
    $new_image_name_two = 'img_'.uniqid().".".$ext_two;
    $image_path_two = "picInput/";
    $upload_path_two = $image_path_two.$new_image_name_two;
    $success_two = move_uploaded_file($_FILES['pro_image_two']['tmp_name'], $upload_path_two);
    
    if($success_two===FALSE){
        echo "error". mysqli_error($con);
        exit();
    }




    $ext_three = pathinfo(basename($_FILES['pro_image_three']['name']), PATHINFO_EXTENSION);
    $new_image_name_three = 'img_'.uniqid().".".$ext_three;
    $image_path_three = "picInput/";
    $upload_path_three = $image_path_three.$new_image_name_three;
    $success_three = move_uploaded_file($_FILES['pro_image_three']['tmp_name'], $upload_path_three);
    
    if($success_three===FALSE){
        echo "error". mysqli_error($con);
        exit();
    }




    $ext_four = pathinfo(basename($_FILES['pro_image_four']['name']), PATHINFO_EXTENSION);
    $new_image_name_four = 'img_'.uniqid().".".$ext_four;
    $image_path_four = "picInput/";
    $upload_path_four = $image_path_four.$new_image_name_four;
    $success_four = move_uploaded_file($_FILES['pro_image_four']['tmp_name'], $upload_path_four);
    
    if($success_four===FALSE){
        echo "error". mysqli_error($con);
        exit();
    }


    $pro_image_one = $new_image_name_one;
    $pro_image_two = $new_image_name_two;
    $pro_image_three = $new_image_name_three;
    $pro_image_four = $new_image_name_four;


    //insert to database
     $sql = "insert into product (g_name , p_type , c_name , address , province , zipcode , locate , description , tel , 
            web , email , face , twitter , line , pic1  , pic2 , pic3 , pic4 ) 
            values('$g_name' , '$p_type' , '$c_name' , '$address' , '$province' , '$zipcode' , '$locate' , '$description' , '$tel' , 
            '$web' , '$email' , '$face' , '$twitter' , '$line' , '$pro_image_one' , '$pro_image_two' , '$pro_image_three' , '$pro_image_four'  )";
    $result = mysqli_query($con , $sql );

    if($result){
        echo "บันทึกสำเร็จ";
        echo " <a href=http://localhost/XML/dashboard-add-listing.html>กลับหน้าหลัก</a>";
    }
    else {
        echo mysqli_error($con);
    }


    // echo "g_Name=".$g_name.'<br>'; 
    // echo "T_name=".$p_type.'<br>'; 
    // echo "c_name=".$c_name.'<br>'; 
    // echo "address=".$address.'<br>'; 
    // echo "province=".$province.'<br>';
    // echo "zipcode=".$zipcode.'<br>';
    // echo "locate=".$locate.'<br>'; 
    // echo "pic1=".$pic1.'<br>';
    // echo "pic2=".$pic2.'<br>';
    // echo "pic3=".$pic3.'<br>'; 
    // echo "pic4=".$pic4.'<br>';
    // echo "descriptionription=".$description.'<br>';
    // echo "tel=".$tel.'<br>';
    // echo "web=".$web.'<br>'; 
    // echo "email=".$email.'<br>';
    // echo "face=".$face.'<br>';
    // echo "twitter=".$twitter.'<br>'; 
    // echo "line=".$line;




?>