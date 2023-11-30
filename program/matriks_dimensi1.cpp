#include <iostream>

using namespace std;

void print_matriks(int matriks[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << matriks[i] << " ";
    }
}

void operasi_matriks(int *matriks_a[], int *matriks_b[], int *matriks_hasil[], int size);

int main(int argc, char const *argv[])
{
    int panjang_a, panjang_b, panjang_hasil;

    cout << "Tentukan panjang matriks a : ";
    cin >> panjang_a;

    int matriks_a[panjang_a];
    for (int i = 0; i < panjang_a; i++)
    {
        cout << "Berikan angka untuk kolom baris ke " << i + 1 << " : ";
        cin >> matriks_a[i];
    }

    print_matriks(matriks_a, panjang_a);

    cout << endl;
    cout << "Tentukan panjang matriks b : ";
    cin >> panjang_b;

    int matriks_b[panjang_b];
    for (int i = 0; i < panjang_b; i++)
    {
        cout << "Berikan angka untuk kolom baris ke " << i + 1 << " : ";
        cin >> matriks_b[i];
    }

    print_matriks(matriks_b, panjang_b);

    return 0;
}
