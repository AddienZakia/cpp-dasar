#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // variable
    // int angka = 19;
    // string kalimat = "hello";
    // char simbol = 'a';
    // bool ketentuan = true;

    // string jenis_buah[5] = {"apel", "anggur", "jeruk", "pir", "stroberi"};
    // cout << sizeof(kalimat);

    // looping throughtout array
    // cout << "Jenis buah sebelumnya" << endl;
    // for (int i = 0; i < sizeof(jenis_buah) / sizeof(jenis_buah[0]); i++)
    // {
    //     cout << jenis_buah[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < sizeof(jenis_buah) / sizeof(jenis_buah[0]); i++)
    // {
    //     cout << "Beri buah " << i + 1 << " : ";
    //     cin >> jenis_buah[i];
    // }

    // cout << "Buah setelah diubah" << endl;
    // for (int i = 0; i < sizeof(jenis_buah) / sizeof(jenis_buah[0]); i++)
    // {
    //     cout << jenis_buah[i] << " ";
    // }

    // char simbol_list[5];

    // for (int i = 0; i < sizeof(simbol_list) / sizeof(simbol_list[0]); i++)
    // {
    //     cin >> simbol_list[i];
    // }

    // for (int i = 0; i < sizeof(simbol_list) / sizeof(simbol_list[0]); i++)
    // {
    //     cout << simbol_list[i] << " ";
    // }

    // ternary , if else
    // int jumlah_pendaftar = 32;
    // string status;

    // if (jumlah_pendaftar < 5)
    // {
    //     status = "small";
    // }
    // else if (jumlah_pendaftar < 10)
    // {
    //     status = "medium";
    // }
    // else if (jumlah_pendaftar < 20)
    // {
    //     status = "large";
    // }
    // else
    // {
    //     status = "big";
    // }

    // cout << status << " | ";

    // string status_pembelian = jumlah_pendaftar < 20 ? "tinggal beberapa" : "masih banyak";

    // cout << status_pembelian;

    // basic pointer reference
    // int *a = 10;
    // int *b = &a;

    // cout << *a;
    // cout << &a << " " << *b;

    // structure
    // struct Peserta
    // {
    //     int id = 500;
    //     string name = "John doe";
    //     string address = "surabaya";
    // };

    // Peserta peserta;

    // peserta.id = 123;

    // cout << peserta.id;

    // double x = (double)3 / 2;
    // cout << x;

    // char kalimat[] = "hello worlds";
    // cout << kalimat[0];

    string x = "hello world";
    cout << x.length();

    return 0;
}
