#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i < n + 1; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        // cout << c;
    }
    return 0;
}