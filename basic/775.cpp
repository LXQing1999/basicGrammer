#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, res;
    while (cin >> s)
    {
        res = s + ' ' + res;
    }
    cout << res;

    return 0;
}