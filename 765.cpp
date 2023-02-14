#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}
