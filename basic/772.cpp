#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    int a[100001];
    for (auto i : s)
    {
        a[i]++;
    }
    for (auto i : s)
    {
        if (a[i] == 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "no" << endl;
}
