#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int fib(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
