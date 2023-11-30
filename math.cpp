#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int maximum = max(2, 5);
    int minimum = min(2, 3);

    int kuadrat = pow(5, 2); // error

    float kuadrats = pow(5, 2);
    float square = sqrt(15);

    // cout << (3.0 / 2);

    cout << kuadrats << " " << square;

    return 0;
}
