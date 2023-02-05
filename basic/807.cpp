#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int sum(int l, int r)
{
    int s = 0;
    for (int i = l; i < r + 1; i++)
    {
        s += i;
    }
    cout << s;
    return 0;
}
int main(int argc, char const *argv[])
{
    int l, r;
    cin >> l >> r;
    sum(l, r);
    return 0;
}
