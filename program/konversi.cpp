#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string x, y;

    cout << "masukkan nilai : ";
    cin >> x >> y;

    cout << stoi(x) + stoi(y) << endl;
    return 0;
}
