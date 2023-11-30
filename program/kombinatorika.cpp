#include <iostream>

using namespace std;

int faktorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * (faktorial(n - 1));
}

int main(int argc, char const *argv[])
{
    int n = 0, r = 0, pilihan;

    do
    {
        cout << "Masukkan nilai n : ";
        cin >> n;

        cout << "Masukkan nilai r : ";
        cin >> r;

        if (n <= 0 || r <= 0)
        {
            cout << "Angka tidak bisa bernilai negatif" << endl;
        }
    } while (n <= 0 || r <= 0);

    string kalimat = "\n1.Kombinasi\n2.Permutasi\n";
    cout << kalimat << "Masukkan pilihan kamu : ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        double kombinasi = (double)faktorial(n) / (faktorial(n - r) * faktorial(r));

        cout << "Nilai kombinasi : " << kombinasi << endl;
    }
    else if (pilihan == 2)
    {
        double permutasi = (double)faktorial(n) / faktorial(n - r);

        cout << "Nilai permutasi : " << permutasi << endl;
    }
    return 0;
}
