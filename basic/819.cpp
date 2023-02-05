#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int f(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * f(x - 1);
    } // 3*f(2)=3*2=6  f(2)=2*f(1)=2
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
