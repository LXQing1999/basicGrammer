#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, s1, s2;
    char a;
    int i = 0; // 用来计数
    while (cin >> a)
    {
        if (a != ',')
        {
            if (i == 0)
            {
                s += a; // 第一个字符串
            }
            else if (i == 1)
            {
                s1 += a;
            }
            else
            {
                s2 += a;
            }
        }
        else
        {
            i++; // 标记是第几个字符串了
        }
    }
    int s, s1, s2;
    // find是从字符串左边开始查询,查询到的第一个子字符串的下标(下标从0开始)
    // rfind是字符串最后一次出现的位置
    s1 = s.find(s1);
    s2 = s.find(s2);
    if (s1 != -1 && s2 != -1 && (s1 + s1.size() - 1) < s2)
    { // 保证s1在左边
        cout << (s2 - s1 - s1.size()) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}