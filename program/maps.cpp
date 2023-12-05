#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> penduduk = {
        {"indonesia", 30},
        {"singapore", 23},
        {"malaysia", 12}};

    // penduduk.insert(pair<string, int>("brunei", 200));
    if (penduduk.begin() == penduduk.find("indonesia"))
    {
        cout << "bener" << endl;
    }
    else
    {
        cout << "salah" << endl;
    }

    penduduk.erase(penduduk.find("indonesia"));

    penduduk.insert(penduduk.begin(), pair<string, int>("surabaya", 323));
    penduduk.insert(penduduk.begin(), pair<string, int>("jakarta", 923));
    penduduk.insert(penduduk.begin(), pair<string, int>("bandung", 12));

    penduduk.erase("jakarta");

    cout << penduduk.size() << endl;
    cout << penduduk.empty() << endl;

    penduduk["indonesia"] = 40;

    // bakal ngurut
    for (map<string, int>::iterator i = penduduk.begin(); i != penduduk.end(); i++)
    {
        // cout << i->first << endl;
        cout << i->first << " " << penduduk[(*i).first] << endl;
    }

    return 0;
}
