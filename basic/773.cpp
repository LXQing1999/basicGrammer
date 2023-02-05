#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    string a, b;
    while (cin >> a >> b)
    {
        int max = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] > a[max])
            {
                max = i;
            }
        }
        a.insert(max + 1, b); // str.insert(i,s);//在原串下标为i的字符串str前插入字符串s
        cout << a << endl;
        /*for (auto c : a)
        {
            if (c == a[max])
            {
                cout << c << b;
                max = -1; // 为了保证有重复出现的最大值只输出一次
            }
            else
            {
                cout << c;
            }
        }
        cout << endl;*/
    }

    return 0;
}

// cin >> a >> b;
// char max = 0;
// int t = 0;
// for (auto i : a)
// {
//     if (i > max)
//     {
//         max = i;
//         t = &i;
//     }
// }
// for (int j = 0; j < t + 1; j++)
// {
//     cout << a[j];
// }
// cout << b;
// for (int j = t + 1; j < a.size() + t; j++)
// {
//     cout << a[j];
// }