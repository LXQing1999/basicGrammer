#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int m = 0;
    int n = 0;
    int sum = 0;
    while (true)
    {
        sum = 0;
        cin >> m >> n;
        if (m > 0 && n > 0)
        {
            if (m > n)
            {
                swap(m, n);
            }
            for (int j = m; j < n + 1; j++)
            {
                cout << j << " ";
                sum += j;
            }

            cout << "Sum=" << sum << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}