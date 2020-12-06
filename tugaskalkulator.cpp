#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//Fungsi nama kelompok
void namaKelompok()
{
    cout << "Ini adalah sebuah fungsi\n";
}

int main()
{
    namaKelompok();

    // Deklarasi Variabel
    int bil1, bil2, pil;
    float hasil;
    string operasi;
    char lagi;

// Fungsi menu atau pilihan operator
menu:
    cout << "Silahkan Pilih Operator" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << endl;

    cout << "Masukan Pilihan : ";
    cin >> pil;
    cout << "Masukan Bilangan pertama : ";
    cin >> bil1;
    cout << "Masukan Bilangan kedua : ";
    cin >> bil2;

    switch (pil)
    {
    case 1:
        hasil = bil1 + bil2;
        operasi = '+';
        break;
    case 2:
        hasil = bil1 - bil2;
        operasi = '-';
        break;
    case 3:
        hasil = bil1 * bil2;
        operasi = '*';
        break;
    case 4:
        hasil = bil1 / bil2;
        operasi = '/';
        break;
    case 5:
        hasil = bil1 % bil2;
        operasi = '%';
        break;
    default:
        cout << "Salah Memasukkan Operator" << endl;
    }

    cout << "*----------------------*" << endl;
    cout << "    " << bil1 << operasi << bil2 << "=" << hasil << endl;
    cout << "*----------------------*" << endl;

    cout << "Coba Lagi? (y atau t) : ";
    cin >> lagi;

    // Logika jika ingin melakukan perhitungan kembali
    if (lagi == 'y' || lagi == 'Y')
    {
        system("pause");
        system("cls"); // Menghapus perhitungan sebelumnya
        goto menu;     // kembali ke pilihan menu
    }

    getch();
}
