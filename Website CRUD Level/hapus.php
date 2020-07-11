<?php
    require "koneksi.php";
    $hapus = mysqli_query($con,"DELETE FROM user WHERE id='$_GET[id]'");

        echo "<script> alert('Data Berhasil di Hapus!');
        document.location.href='admin.php';
        </script>"; 
    ?>