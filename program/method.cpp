#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int swap = *b;
    *b = *a;
    *a = swap;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    // // sebelum diubah
    cout << a << " " << b << endl;

    swap(&a, &b);
    // // setelah diubah
    cout << a << " " << b;

    return 0;
}
