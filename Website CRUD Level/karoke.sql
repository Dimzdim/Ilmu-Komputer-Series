-- phpMyAdmin SQL Dump
-- version 4.9.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 09 Bulan Mei 2020 pada 09.18
-- Versi server: 10.4.8-MariaDB
-- Versi PHP: 7.1.32

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `karoke`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `loguser`
--

CREATE TABLE `loguser` (
  `No` int(11) NOT NULL,
  `Time` datetime NOT NULL,
  `ID` varchar(10) NOT NULL,
  `Aksi` varchar(50) NOT NULL,
  `Nama` varchar(50) NOT NULL,
  `NamaNew` varchar(50) NOT NULL,
  `Type` varchar(10) NOT NULL,
  `TypeNew` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `loguser`
--

INSERT INTO `loguser` (`No`, `Time`, `ID`, `Aksi`, `Nama`, `NamaNew`, `Type`, `TypeNew`) VALUES
(0, '2020-05-03 18:11:53', '23', 'Delete Member AyoKaroke Admin', '', '', '', ''),
(0, '2020-05-03 18:14:15', '24', 'Tambah Member AyoKaroke', '', '', 'VIP', ''),
(0, '2020-05-03 18:14:28', '24', 'Delete Member AyoKaroke - Admin', '', '', '', ''),
(0, '2020-05-03 18:33:22', '25', 'Tambah Member AyoKaroke', '', '', 'VIP', ''),
(0, '2020-05-03 20:36:52', '25', 'Update Member AyoKaroke', '', '', 'VIP', 'VIP'),
(0, '2020-05-03 20:40:08', '25', 'Update Member AyoKaroke', '', '', 'VIP', 'FAMILY'),
(0, '2020-05-03 20:40:55', '25', 'Update Member AyoKaroke', '', '', 'FAMILY', 'VVIP'),
(0, '2020-05-03 20:41:09', '25', 'Update Member AyoKaroke', '', '', 'VVIP', 'VVIP'),
(0, '2020-05-03 20:41:36', '25', 'Delete Member AyoKaroke - Admin', '', '', '', ''),
(0, '2020-05-03 20:51:45', '26', 'Tambah Member AyoKaroke', '', '', 'VIP', ''),
(0, '2020-05-03 20:52:10', '26', 'Update Member AyoKaroke', '', '', 'VIP', 'VIP'),
(0, '2020-05-03 20:57:14', '26', 'Update Member AyoKaroke', 'AKUAKUAKU', 'AKU SAYANG DIA', 'VIP', 'FAMILY'),
(0, '2020-05-03 20:57:45', '26', 'Delete Member AyoKaroke - Admin', '', '', '', ''),
(0, '2020-05-03 20:58:48', '27', 'Tambah Member AyoKaroke', 'Dimas', '', 'VVIP', ''),
(0, '2020-05-03 20:59:30', '27', 'Delete Member AyoKaroke - Admin', '', '', '', '');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pesan`
--

CREATE TABLE `pesan` (
  `time` datetime NOT NULL,
  `email` varchar(100) NOT NULL,
  `pesan` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `pesan`
--

INSERT INTO `pesan` (`time`, `email`, `pesan`) VALUES
('0000-00-00 00:00:00', 's@gmail.com', 'Kangen'),
('2020-05-09 14:03:29', 'dimzpurnomo@gmail.com', 'Akukangen');

-- --------------------------------------------------------

--
-- Struktur dari tabel `user`
--

CREATE TABLE `user` (
  `email` varchar(50) NOT NULL,
  `password` varchar(30) NOT NULL,
  `nama` varchar(30) NOT NULL,
  `level` varchar(30) NOT NULL,
  `type` varchar(30) NOT NULL,
  `id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `user`
--

INSERT INTO `user` (`email`, `password`, `nama`, `level`, `type`, `id`) VALUES
('dimzpurnomo@gmail.com', '123456', 'Dimas Purnomo', 'admin', '', 1);

--
-- Trigger `user`
--
DELIMITER $$
CREATE TRIGGER `delete` AFTER DELETE ON `user` FOR EACH ROW BEGIN
INSERT INTO loguser SET
Time = Now(),
ID = old.id,
Aksi = "Delete Member AyoKaroke - Admin";
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `insert` AFTER INSERT ON `user` FOR EACH ROW BEGIN
INSERT INTO loguser SET
Time = Now(),
ID = new.id,
Aksi = "Tambah Member AyoKaroke",
Nama = new.nama,
Type = new.type;
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update` AFTER UPDATE ON `user` FOR EACH ROW BEGIN
INSERT INTO loguser SET
Time = Now(),
ID = new.id,
Aksi = "Update Member AyoKaroke",
Nama = old.nama,
NamaNew = new.nama,
Type = old.type,
TypeNew = new.type;
END
$$
DELIMITER ;

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT untuk tabel yang dibuang
--

--
-- AUTO_INCREMENT untuk tabel `user`
--
ALTER TABLE `user`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=28;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
