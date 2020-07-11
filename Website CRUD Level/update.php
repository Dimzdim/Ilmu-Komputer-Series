<?php

    require "koneksi.php";
    $email = $_POST['email'];
    $password = $_POST['password'];
    $nama = $_POST['nama'];
    $type = $_POST['type'];

    $query = mysqli_query($con,"UPDATE user SET
    email='$email', nama='$nama', type='$type' WHERE email='$email'");

    if(isset($query)){
        echo "<script> alert('Data Berhasil di Edit!');
        document.location.href='member.php';
        </script>";
    }

?>