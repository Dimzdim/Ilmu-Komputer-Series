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
                <h2>Member AyoKareoke!</h2>
            </div>
            <div class="nav-right">
                <a href="#">Home</a>
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
    }

    $email = $_SESSION['email'];
    
    $data = mysqli_query ($con,"SELECT * FROM user where email='$email'");
    $row = mysqli_fetch_assoc($data)
    ?>

    <div class="update" id="update">
    <h1>Update Member - <?php echo $row["nama"] ?></h1> 
    <center>
    <div class="updatedata">
        <form action="update.php" method="post">
            <p>Email</p>
            <input name="email" type="email"  required="" value="<?php echo $row["email"]?>">
            <p>Password</p>
            <input name="password" type="password" required="" value="<?php echo $row["password"]?>">
            <p>Nama</p>
            <input name="nama" type="text" required="" value="<?php echo $row["nama"]?>">
            <p>Type AyoKaroke!</p>           
            <select name="type" required="">
                <option value="VIP">VIP</option>
                <option value="VVIP">VVIP</option>    
                <option value="FAMILY">FAMILY</option>
            </select>
            <br><br><input type="submit" value="Update"></form>
        </div></center>
    </div>
    
</body>
</html>