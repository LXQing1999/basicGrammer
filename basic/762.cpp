#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    double k;
    cin >> k;
    string a, b;
    cin >> a >> b;
    double t = 0; // 一定要用double类型，从而运算完后，结果也才能是double类型。方便和k作比较
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            t++;
        }
    }
    double len = t / a.size();
    // cout << a.size() << endl;
    // cout << t << endl;
    if (len >= k)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}