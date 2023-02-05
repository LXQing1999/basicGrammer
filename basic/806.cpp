#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

double add(double x, double y)
{
    double add = x + y;
    printf("%.2lf", add);
    return 0;
}
int main(int argc, char const *argv[])
{
    double x, y;
    cin >> x >> y;
    add(x, y);
    return 0;
}
