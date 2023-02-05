#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// strlen() 函数从字符串的开头位置依次向后计数，直到遇见\0，然后返回计时器的值。最终统计的字符串长度不包括\0
int main(int argc, char const *argv[])
{
    // string a, b;
    // cin >> a >> b;
    char a[100], b[100]; /*定义一个最大长度为199, 末尾是'\0'的字符数组来存储字符串*/
    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    if (a[strlen(a) - 1] == '\n')
    {
        a[strlen(a) - 1] = 0;
    } // 去掉末尾回车
    if (b[strlen(b) - 1] == '\n')
    {
        b[strlen(b) - 1] = 0;
    } // 将字符串全部小写
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }
    }

    // strcmp (A,B) -- 字符串比较函数。 当 A字符串和 B字符串 一样时，函数返回 0。
    int t = strcmp(a, b);
    if (t == 0)
    {
        cout << "=";
    }
    else if (t < 0)
    {
        cout << "<";
    }
    else
    {
        cout << ">";
    }
    return 0;
}
/*int t = 0;
if (a.size() < b.size())
{
    cout << "<";
    return 0;
}
else if (a.size() > b.size())
{
    cout << ">";
    return 0;
}
int len = min(a.size(), b.size());
for (int i = 0; i < len; i++)
{
    if (a[i] == b[i] || a[i] == b[i] + 32 || a[i] == b[i] - 32)
    {
        t = 0;
    }
    else if (a[i] < b[i] && a[i] != b[i] - 32)
    {
        t--;
        continue;
    }
    else
    {
        t++;
        continue;
    }
}
if (t == 0)
{
    cout << "=";
}
else if (t < 0)
{
    cout << "<";
}
else
{
    cout << ">";
}
return 0;
}*/
