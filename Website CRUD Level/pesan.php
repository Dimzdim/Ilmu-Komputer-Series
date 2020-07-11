<?php
    require "koneksi.php";
    $email = $_POST['email'];
    $pesan = $_POST['pesan'];

   
    $query = mysqli_query($con,"INSERT INTO pesan VALUES (NOW(),'$email','$pesan')");
    
    if(isset($query)){
        echo "<script> alert('Pesan Kangen Berhasil Dikirim!');
        document.location.href='index.php';
        </script>";
    }

?>
