#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void copy(int a[], int b[], int size)
{
    for (int k = 0; k < size; k++)
    {
        b[k] = a[k];
    }
}
int main(int argc, char const *argv[])
{
    int n, m, size;
    int a[100];
    int b[100];
    cin >> n >> m >> size;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    copy(a, b, size);
    for (int j = 0; j < m; j++)
    {
        cout << b[j] << " ";
    }
    return 0;
}
