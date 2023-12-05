#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> x = {1, 2, 3, 4};

    for (int i = 0; i < x.size(); i++)
    {
        cout << x.at(i) << " ";
    }

    return 0;
}
