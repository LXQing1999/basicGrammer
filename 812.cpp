#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, size;
    cin >> n >> size;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
