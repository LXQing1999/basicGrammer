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
        if (i >= '0' && i <= '9')
        {
            t++;
        }
    }
    cout << t << endl;
    return 0;
}
