#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, maxs;
    int max = -1;
    while (cin >> s)
    {
        int cnt = 0;
        if (s[s.size() - 1] == '.')
            cnt = s.size() - 1;
        else
            cnt = s.size();

        if (cnt > max)
        {
            max = cnt;
            maxs = s;
        }
        // cout << maxs << cnt << endl;
        if (s[s.size() - 1] == '.')
            break;
    }
    // cout << maxs << endl;
    for (auto i : maxs)
    {
        if (i != '.')
            cout << i;
    }
    cout << endl;
    return 0;
}

/*int main(int argc, char const *argv[])
{
    string s, maxs;
    int max = -1;
    while (cin >> s)
    {
        int cnt = 0;
        bool flag = false;
        for (auto i : s)
        {
            if (i != '.')
                cnt++;
            else
                flag = true;
        }
        // cout << endl;
        if (cnt > max)
        {
            max = cnt;
            maxs = s;
            // cout << maxs; // 你这行的输出可以改一下

            // 你觉得呢，反正就是把原来一次性输出包含句号的字符串
            // 改成判断一下字符串的每一个字符，不是句号才输出
            // 这个i可以和‘ .’ 直接比较哇？
        }
        // cout << "max = " << max << "   " << maxs << endl;
        if (flag)
            break;
    }
    for (auto i : maxs)
    {
        if (i != '.')
            cout << i;
    }
    cout << endl;
    return 0;
}*/