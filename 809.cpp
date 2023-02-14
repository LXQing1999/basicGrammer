#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int lcm(int a, int b)
{
    for (int i = 1; i < a * b + 1; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    lcm(a, b);
    return 0;
}
