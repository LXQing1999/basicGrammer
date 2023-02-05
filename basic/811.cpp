#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;
}
int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;
    swap(x, y);
    return 0;
}
