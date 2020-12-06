#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int WHITE = 15;

//Fungsi nama kelompok
void namaKelompok()
{
    // system("Color E4");
    cout << "Nama Kelompok\n";
    cout << "1. Rizka Nur Remadiani\n";
    cout << "2. Putri Handayani\n";
    cout << "3. Siti Sarah\n";
    cout << "4. Khairunnisa Amir\n";
    cout << "\n\n";
    cout << "------------------------\n";
}

void clearScreen(int characterLength)
{
    for (int i = 0; i < characterLength; i++)
    {
        cout << "\b";
    }
}

void changeColour(int colour)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
}

void showLoadingScreen()
{
    int i;
    string closed = "---", open = "***";
    int colour[] = {RED, GREEN, BLUE};

    cout << closed;

    for (i = 0; i < 3; i++)
    {
        Sleep(1000);
        clearScreen(5);
        changeColour(colour[i]);

        cout << open;

        Sleep(1000);
        clearScreen(5);
        changeColour(WHITE);
    }
}

void showTitle()
{
    changeColour(RED);
    cout << "Madrasah Aliyah\n";
    Sleep(1000);

    changeColour(GREEN);
    cout << "AL-MUSTAQIM\n";
    Sleep(1000);

    changeColour(WHITE);
    cout << "TUGAS TIK\n\n";
    Sleep(1000);
}

int main()
{
    showLoadingScreen();
    showTitle();
    namaKelompok();

    // Deklarasi Variabel
    int bil1, bil2, pil;
    float hasil;
    string operasi;
    char lagi;

// Fungsi menu atau pilihan operator
menu:
    cout << "Silahkan Pilih Operator\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Modulus\n";
    cout << "\n";

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
        cout << "Salah Memasukkan Operator\n";
    }

    cout << "*----------------------*\n";
    cout << "    " << bil1 << operasi << bil2 << "=" << hasil << "\n";
    cout << "*----------------------*"
         << "\n";

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
