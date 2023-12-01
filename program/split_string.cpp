#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    char delimiter;
    cout << "Give a string : ";
    getline(cin, str);

    cout << "give a delimiter : ";
    cin >> delimiter;

    int count_delimiter = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == delimiter)
            count_delimiter++;
    }

    string x = "";
    int arrCount = 0;
    string arrSplit[count_delimiter];
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == delimiter)
        {
            arrSplit[arrCount] = x;
            x = "";
            arrCount++;
            continue;
        }

        x += str[i];
    }
    arrSplit[count_delimiter - 1] = x;

    for (int i = 0; i < count_delimiter; i++)
    {
        cout << arrSplit[i] << " ";
    }

    return 0;
}
