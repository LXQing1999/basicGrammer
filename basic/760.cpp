#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int t = 0;
    getline(cin, s);
    for (auto i : s)
    {
        t++;
    }
    cout << t << endl;
    return 0;
}
