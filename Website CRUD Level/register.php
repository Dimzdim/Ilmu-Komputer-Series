<?php
    require "koneksi.php";
    $email = $_POST['email'];
    $password = $_POST['password'];
    $nama = $_POST['nama'];
    $type = $_POST['type'];

    $user_check = mysqli_num_rows(mysqli_query($con,"SELECT * FROM user WHERE email='$email'"));

    if($user_check > 0){
        echo "<script> alert('Email Pernah DiDaftarkan Sebelumnya!');
        document.location.href='index.php';
        </script>";
    }else{
    $query = mysqli_query($con,"INSERT INTO user VALUES 
    ('$email','$password','$nama','member','$type','')");
    }
    if(isset($query)){
        echo "<script> alert('Data Berhasil di Tambahkan!');
        document.location.href='index.php';
        </script>";
    }

?>
