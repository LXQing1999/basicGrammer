#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    // 使用双指针
    int n;
    cin >> n;
    while (n--)
    {
        int maxlen = -1; // 记录最大长度
        string str, maxs;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            int j = i;
            int cnt = 0;
            while (str[j] == str[i] && j < str.size())
            { // 当i和j指向同一个元素时，cnt++  再和已知的max作比较
                j++;
                cnt++;
            }
            if (cnt > maxlen)
            {
                maxlen = cnt;
                maxs = str[i];
            }
            i = j - 1; // 之所以需要-1，是因为for循环时自动加一了
        }
        cout << maxs << " " << maxlen << endl;
    }
    return 0;
}

/*int main(int argc, char const *argv[])
{
    int n;
    int max = -1;
    cin >> n;
    string a;
    int c[128]; // 用于计数
    for (int i = 0; i < 128; i++)
    {
        c[i] = 0;
    }

    while (n--)
    {
        cin >> a;
        for (auto i : a)
        {
            c[i]++;
            cout << "i = " << i << "  c[i] = " << c[i] << endl;
        }
        for (int i = 0; i < 128; i++)
        {
            if (c[i] > c[max])
            {
                max = i;
            }
        }
        cout << char(max) << " " << c[max] << endl;
    }

    return 0;
}*/
