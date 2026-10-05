# TP3DPBO2526C1

## Janji
Saya Afif Fadilah Rahman dengan NIM 2508287 mengerjakan TP 3 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

## Desain Program
![alt text](<Diagram TP3.png>)

Program yang saya buat memiliki tema kapal perang jepang dengan total 5 class.

1. Kapal\
class Kapal memiliki hubungan Komposisi dengan class MesinKapal karena Kapal membutuhkan mesin agar bisa beroperasi,apabila kapal dihancurkan maka mesin juga ikut hancur. class Kapal memiliki hubungan Aggregasi dengan class Weaponery karena kapal perang dapat dibongkar-pasangkan dengan berbagai macam persenjataan. class Kapal memiliki attribut **id (str)**, **nama (str)**, dan **jenis (str)** sebagai identifier objek. class juga memiliki attribut **mesin (MesinKapal)** sebagai relasi komposisi ke class MesinKapal. Attribut **listWeapon (list)** adalah attribut yang merepresentasikan weapon apa saja yang dimiliki kapal. Selain memiliki method getter dan setter, class Kapal memiliki method addWeapon untuk menambahkan weapon kapal.

2. MesinKapal\
class MesinKapal memiliki attribut **id (str)**, **nama (str)**, dan **tipe (str)** sebagai identifier.

3. Weaponery\
class Weaponery memiliki relasi inheritance dengan class Rudal dan class Meriam. class Weaponery memiliki attribut **id (str)** dan **nama (str)** sebagai identifier serta attribut **damage (int)** yang merepresentasikan kekuatan dari senjata.

4. Rudal\
class Rudal merupakan child dari class Weaponery karena Rudal merupakan salah satu jenis Weaponery dalam kasus kapal perang. class Rudal memiliki attribut **tipePemandu (str)** yang merepresentasikan alat pemandu dari rudal, serta attribut **sasaran (str)** yang merepresentasikan jenis sasaran rudal (udara, darat, dsb.).

5. Meriam
class Meriam merupakan child dari class Weaponery karena Meriam merupakan salah satu jenis Weaponery dalam kasus kapal perang. class Meriam memiliki attribut **kaliber (str)** yang merepresentasikan jenis ammo yang digunakan.

## Penjelasan alur progam
Program menggunakan data yang ditambahkan secara hardcode dan tidak memiliki fitur tambah data dari user. Alur program sebagai berikut:\
*Inisialisasi list of object -> Menginstansiasi object sekaligus mengisi list -> Tampilkan data*

## Dokumentasi

### C++
![alt text](<Cpp/Dokumentasi/CppDokumentasi.png>)

### Java
![alt text](<Java/Dokumentasi/JavaDokumentasi.png>)

### Python
![alt text](<Python/Dokumentasi/PythonDokumentasi.png>)
