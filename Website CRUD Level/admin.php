<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/stylesheet.css">
    <link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css">
    <title>Menu Admin - Ayokaroke</title>
</head>
<body>
<header>
        <div class="topnav">
            <div class="nav-left">
                <h2>Admin AyoKareoke!</h2>
            </div>
            <div class="nav-right">
                <a href="#">Home</a>
                <a href="#fitur">Data</a>
                <a href="#aktifitas">Aktifitas Member</a>
                <a href="logout.php">Logout</a>
            </div>
        </div>
    </header>

    <?php 
    session_start();
    
    require 'koneksi.php';  
 	// cek apakah yang mengakses halaman ini sudah login
	if($_SESSION['level']==""){
		header("location:index.php?pesan=belumlogin");
    }else if ($_SESSION['level']=="member"){
		header("location:index.php?pesan=admin");
    }
    
    include ("koneksi.php");
    $data = mysqli_query ($con,"SELECT * FROM user");
    $data2 = mysqli_query ($con,"SELECT * FROM loguser ORDER BY Time DESC LIMIT 5");
    $data3 = mysqli_query ($con,"SELECT * FROM pesan ORDER BY Time DESC LIMIT 5");
    ?>

    <div class="middle" id="data">
    <h1>Data Member</h1> 
    <center>
    <div class="data">
        <table border="1" cellspacing="0"; cellpadding="10">
            <tr>
                <th>No</th>
                <th>Email</th>
                <th>Nama</th>
                <th>Status Member</th>
                <th>Aksi</th>
            </tr>

            <?php $i = 1; ?>
            <?php while ($row = mysqli_fetch_assoc($data)):?>
            <tr>
                <td><?php echo $i; ?></td>
                <td><?php echo $row["email"] ?></td>
                <td><?php echo $row["nama"] ?></td>
                <td><center><?php echo $row["type"] ?></center></td>
                <td><a href="hapus.php?id=<?php echo $row["id"]?>">Hapus<a></td>
            </tr>  
            <?php $i++; ?>
            <?php endwhile ?>  
        </table></div></center>
    </div>

    
    <div class="aktifitas" id="aktifitas">
    <h1>Log Member</h1> 
    <center>
    <div class="data">
        <table border="1" cellspacing="0"; cellpadding="10">
            <tr>
                <th>No</th>
                <th>Time</th>
                <th>ID</th>
                <th>Aksi</th>
                <th>Nama</th>
                <th>Nama     Baru</th>
                <th>Type</th>
                <th>Type Baru</th>
            </tr>

            <?php $i = 1; ?>
            <?php while ($row = mysqli_fetch_assoc($data2)):?>
            <tr>
                <td><?php echo $i; ?></td>
                <td><?php echo $row["Time"] ?></td>
                <td>AYK<?php echo $row["ID"] ?></td>
                <td><?php echo $row["Aksi"] ?></td>
                <td><?php echo $row["Nama"] ?></td>
                <td><?php echo $row["NamaNew"] ?></td>
                <td><center><?php echo $row["Type"] ?></center></td>
                <td><center><?php echo $row["TypeNew"] ?></center></td>
            </tr>  
            <?php $i++; ?>
            <?php endwhile ?>  
        </table></div></center>
    </div>

    <div class="pesankangen" id="pesankangen">
    <h1>Pesan Kangen</h1> 
    <center>
    <div class="data">
        <table border="1" cellspacing="0"; cellpadding="10">
            <tr>
                <th>No</th>
                <th>Time</th>
                <th>Email</th>
                <th>Pesan</th>
            </tr>

            <?php $i = 1; ?>
            <?php while ($row = mysqli_fetch_assoc($data3)):?>
            <tr>
                <td><?php echo $i; ?></td>
                <td><?php echo $row["time"] ?></td>
                <td><?php echo $row["email"] ?></td>
                <td><?php echo $row["pesan"] ?></td>
            </tr>  
            <?php $i++; ?>
            <?php endwhile ?>  
        </table></div></center>
    </div>
    
</body>
</html>