<?php
require ('Shirt.php');

$shirt = new Shirt();
$shirt->setId('SH01');
$shirt->setName('Kemeja');
$shirt->setBrand('Gucci');
$shirt->setPrice(1000000);
$shirt->setSize('L');
$shirt->setMaterial('Katun');
$shirt->setGender('Pria');
$shirt->setColor('Putih');
$shirt->setsleveeType('Pendek');

$shirt2 = new Shirt();
$shirt2->setId('SH02');
$shirt2->setName('Kaos');
$shirt2->setBrand('Erigo');
$shirt2->setPrice(3500000);
$shirt2->setSize('L');
$shirt2->setMaterial('Katun');
$shirt2->setGender('Pria');
$shirt2->setColor('Hitam');
$shirt2->setsleveeType('Pendek');

$shirt3 = new Shirt();
$shirt3->setId('SH03');
$shirt3->setName('Kaos');
$shirt3->setBrand('Hugo Boss');
$shirt3->setPrice(5000000);
$shirt3->setSize('L');
$shirt3->setMaterial('Katun');
$shirt3->setGender('Pria');
$shirt3->setColor('Putih');
$shirt3->setsleveeType('Panjang');

$shirt4 = new Shirt();
$shirt4->setId('SH04');
$shirt4->setName('Kaos');
$shirt4->setBrand('Adidas');
$shirt4->setPrice(900000);
$shirt4->setSize('L');
$shirt4->setMaterial('Katun');
$shirt4->setGender('Pria');
$shirt4->setColor('Putih');
$shirt4->setsleveeType('Pendek');

// masukkan ke dalam array
$daftarShirt = array($shirt, $shirt2, $shirt3, $shirt4);

// tampilkan dari 1 sampai 4 for loop dan table
echo "<table border='1'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Nama</th>";
echo "<th>Merek</th>";
echo "<th>Harga</th>";
echo "<th>Ukuran</th>";
echo "<th>Bahan</th>";
echo "<th>Jenis Kelamin</th>";
echo "<th>Warna</th>";
echo "<th>Jenis Lengan</th>";
echo "</tr>";

for ($i = 0; $i < count($daftarShirt); $i++) {
    echo "<tr>";
    echo "<td>" . $daftarShirt[$i]->getId() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getName() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getBrand() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getPrice() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getSize() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getMaterial() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getGender() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getColor() . "</td>";
    echo "<td>" . $daftarShirt[$i]->getsleveeType() . "</td>";
    echo "</tr>";
}

?>