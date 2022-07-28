#include <iostream>
#include <time.h>
using namespace std;
int main()
{
  int pilihan, level, kelas, bayar, kode;

  cout << "DAFTAR KELAS PEMOGRAMMAN" << endl;
  cout << "1. Full Stack" << endl;
  cout << "2. Backend" << endl;
  cout << "3. Frontend" << endl;
  cout << "4. Console" << endl;
  cout << "----------------------------------------" << endl;

  cout << "Masukkan Pilihan : ";
  cin >> pilihan;
  cout << endl;

  switch (pilihan)
  {
  case 1:
    srand(time(NULL));
    kode = rand() % 100;
    cout << "1. Harga Regular Class Rp 300.000/Level" << endl;
    cout << "2. Harga Private Class Rp 650.000/Level" << endl;
    cout << endl;
    cout << "Masukkan Kelas: ";
    cin >> kelas;
    cout << "Masukkan Level: ";
    cin >> level;
    cout << endl;
    if (kelas == 1)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 300000 * level + kode << endl;
    }
    if (kelas == 2)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 650000 * level + kode << endl;
    }

    break;
  case 2:
    srand(time(NULL));
    kode = rand() % 100;
    cout << "1. Harga Regular Class Rp 350.000/Level" << endl;
    cout << "2. Harga Private Class Rp 750.000/Level" << endl;
    cout << endl;
    cout << "Masukkan Kelas: ";
    cin >> kelas;
    cout << "Masukkan Level: ";
    cin >> level;
    cout << endl;
    if (kelas == 1)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 300000 * level + kode << endl;
    }
    if (kelas == 2)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 650000 * level + kode << endl;
    }
    break;
  case 3:
    srand(time(NULL));
    kode = rand() % 100;
    cout << "1. Harga Regular Class Rp 350.000/Level" << endl;
    cout << "2. Harga Private Class Rp 750.000/Level" << endl;
    cout << endl;
    cout << "Masukkan Kelas: ";
    cin >> kelas;
    cout << "Masukkan Level: ";
    cin >> level;
    cout << endl;
    if (kelas == 1)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 300000 * level + kode << endl;
    }
    if (kelas == 2)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 650000 * level + kode << endl;
    }
  case 4:
    srand(time(NULL));
    kode = rand() % 100;
    cout << "1. Harga Regular Class Rp 400.000/Level" << endl;
    cout << "2. Harga Private Class Rp 900.000/Level" << endl;
    cout << endl;
    cout << "Masukkan Kelas: ";
    cin >> kelas;
    cout << "Masukkan Level: ";
    cin >> level;
    cout << endl;
    if (kelas == 1)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 400000 * level + kode << endl;
    }
    if (kelas == 2)
    {
      cout << "Total Harga + Kode Pembayaran (3 digit terakhir): " << 900000 * level + kode << endl;
    }
    break;
  default:
    cout << "Pilihan Anda salah ";
    break;
  }
}
