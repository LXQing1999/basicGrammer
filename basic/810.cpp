#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int abs(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << abs(n);
    return 0;
}
