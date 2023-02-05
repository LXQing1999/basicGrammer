#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x;
    int countin = 0;
    int countout = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 10 && x <= 20)
        {
            countin++;
        }
        else
        {
            countout++;
        }
    }
    cout << countin << " in" << endl;
    cout << countout << " out" << endl;
    return 0;
}