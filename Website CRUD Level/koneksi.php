<?php
$con = mysqli_connect("localhost","root","","karoke");

if(isset($con)){
    echo "Database Berhasil Terkoneksi";
} else {
    echo "Database tidak dapat Tekoneksi";
}
?>