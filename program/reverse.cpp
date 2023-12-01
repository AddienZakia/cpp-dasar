#include <iostream>

using namespace std;

string reverse(string kalimat)
{
    string hasil;

    for (int i = kalimat.length() - 1; i >= 0; i--)
    {
        hasil += kalimat[i];
    }

    return hasil;
}

int main(int argc, char const *argv[])
{
    string kalimat;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    string reversed = reverse(kalimat);

    cout << "Kalimat reverse " << reversed;

    return 0;
}