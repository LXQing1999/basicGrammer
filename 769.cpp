#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    char w;
    cin >> w;
    for (auto &c : s)
    {
        if (c == w)
        {
            c = '#';
        }
    }
    cout << s << endl;
    return 0;
}
