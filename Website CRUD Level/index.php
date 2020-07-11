<?php 
    if(isset($_GET['pesan'])){
        if($_GET['pesan']=="admin"){
        echo "<script> alert('Anda Bukan Admin di AyoKaroke!');
        document.location.href='index.php';
        </script>";
        } else if($_GET['pesan']=="gagal"){
        echo "<script> alert('Username Atau Password Salah!');
        document.location.href='index.php';
        </script>";
        }else if($_GET['pesan']=="belumlogin"){
        echo "<script> alert('Anda Belum Login!');
        document.location.href='index.php';
        </script>";}
    }
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/stylesheet.css">
    <link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css">
    <title>AyoKaroke</title>
</head>
<body>
    <header>
        <div class="topnav">
            <div class="nav-left">
                <h2>AyoKareoke!</h2>
            </div>
            <div class="nav-right">
                <a href="#">Home</a>
                <a href="#about">About AyoKareoke</a>
                <a href="#fitur">Facilities</a>
                <a href="#login">Log In</a>
            </div>
        </div>
    </header>

    <div class="top-wrapper">
        <div class="container">
            <h1>AyoKaroke!</h1>
            <p>AyoKaroke! adalah Project yang dibuat untuk membuat tugas IMK dan Basis Data</p>
        </div>
        <div class="btn-wrapper">
            <a href="#login" class="btn signup"><span class="fa fa-envelope"></span>     Ayo Jadi Member AyoKaroke!</a>
        </div>
    </div>

    <div class="about-company" id="about">
            <div class="headingabout">
                <h2>About My Company</h2><br><br>
                <p>AyoKaroke adalah sebuah perusahaan Karoke yang dibuat menjelang</p><br><br><br>
                <p>Tugas Praktikum Akhir Interaksi Manusia Komputer dan Basis Data Lanjut</p>
            </div>
        </div>
    </div>

    <div class="fitur-wrapper" id="fitur">
        <div class="container">
            <div class="heading">
                <h2>Fasilitas AyoKaroke!</h2>
            </div>

            <div class="fiturs">

                <div class="fitur">
                    <div class="fitur-icon">
                        <img src="gambar/icon1.png">
                        <p>VIP</p>
                    </div>
                    <p class="deskripsi">-</p>
                </div>

                <div class="fitur">
                    <div class="fitur-icon">
                        <img src="gambar/icon2.png">
                        <p>VVIP</p>
                    </div>
                    <p class="deskripsi">-</p>
                </div>

                
                <div class="fitur">
                    <div class="fitur-icon">
                        <img src="gambar/icon3.png">
                        <p>FAMILY</p>
                    </div>
                    <p class="deskripsi">-</p>
                </div>
                <div class="clear"></div>  
            </div>
        </div>
    </div> 
    
    <div class="login-wrapper" id="login">
        <div class="login-left">
            
            <h2>LOG IN</h2>
            <form action="login.php" method="post">
                <p>Email</p>
                <input name="email" type="email" required="" required="">
                <p>Password</p>
                <input name="password" type="password" required="">
                <br><br></t><input class="submitbutton" type="submit" value="Login">
                </form>
        </div>
        <div class="register-right">
            <form action="register.php" method="post">
            <h2>REGISTER</h2>
            <p>Email</p>
            <input name="email" type="email"  required="">
            <p>Password</p>
            <input name="password" type="password" required="" >
            <p>Nama</p>
            <input name="nama" type="text" required="">
            <p>Type AyoKaroke!</p>
            <select name="type" required="">
                <option value="VIP">VIP</option>
                <option value="VVIP">VVIP</option>    
                <option value="FAMILY">FAMILY</option>
            </select>
            <br><br><input class="registerbutton" type="submit" value="Register"> </form>
        </div>
     </div>

    <div class="kontak" id="kontak">
        <h3 class="kontak-judul">Pesan - Siapa Tahu Kangen(?)</h3>
            <form action="pesan.php" method="post">
            <p>Email (Wajib diisi)</p>
            <input name="email" type="email"  required="">
            <p>Pesan</p>
            <textarea name="pesan" required=""></textarea>
            <p>*Bidang Wajib Diisi</p>
            <input class="contact-submit" type="submit" value="Kirim"></form>
    </div>


    <div class="footer">
      <div class="footer-logo">Ayokaroke 2020 - Kelompok 1</div>
    </div>
</body>
</html>