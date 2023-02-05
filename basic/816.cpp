#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void reverse(int a[], int size)
{
    int temp;
    int len = size / 2;
    for (int i = 0; i < len; i++)
    {
        temp = a[size - 1 - i];
        a[size - 1 - i] = a[i];
        a[i] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int n, size;
    cin >> n >> size;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, size);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
