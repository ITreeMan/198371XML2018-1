<?php

function get_data()
{
require'./contactDB.php';
$sql="select*from product";
$result = mysqli_query($con,$sql);
$otop_data = array();

while ($row = mysqli_fetch_array($result))
    {

        $otop_data [] = array (
            'product_id'  => $row["product_id"],
            'g_name'  => $row["g_name"],
            'p_type'  => $row["p_type"],
            'c_name'  => $row["c_name"],
            'address'  => $row["address"],
            'province'  => $row["province"],
            'zipcode'  => $row["zipcode"],
            'locate'  => $row["locate"],
            'pic1'  => $row["pic1"],
            'pic2'  => $row["pic2"],
            'pic3'  => $row["pic3"],
            'pic4'  => $row["pic4"],
            'description'  => $row["description"],
            'tel'  => $row["tel"],
            'web'  => $row["web"],
            'email'  => $row["email"],
            'face'  => $row["face"],
            'twitter'  => $row["twitter"],
            'line'  => $row["line"]
        );
    }


    $otop = (object) [
        'otopobj' => $otop_data
    ];



        //$otop_obj = $otop_data;
        return json_encode ($otop);

    }

    echo '<pre>';
    print_r(get_data());
    echo '<pre>';

    $file_name = 'allprovinceAPI'.'.json';

    if (file_put_contents($file_name,get_data()))
    {
        echo $file_name.'file created';
    }
    else
    {
        echo 'Thre is some error';

    }


?>