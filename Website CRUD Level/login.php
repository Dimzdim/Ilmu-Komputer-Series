<?php 
session_start();

require 'koneksi.php';

$email = $_POST['email'];
$password = $_POST['password'];


$login = mysqli_query($con,"SELECT * FROM user WHERE email='$email' and password='$password'");
$cek = mysqli_num_rows($login);

if ($cek > 0){
    $data = mysqli_fetch_array($login);

    if($data['level']== "admin"){
        $_SESSION['email'] = $email;
        $_SESSION['level'] = "admin";
        $_SESSION['nama'] = $data['nama'];
        header("location:admin.php");
    }else if($data['level']== "member"){
        $_SESSION['email'] = $email;
        $_SESSION['level'] = "member";
        $_SESSIOM['nama'] = $data['nama'];
        header("location:member.php");
    }
}else{
header("location:index.php?pesan=gagal");
}

?>

