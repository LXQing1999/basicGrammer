#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool is_substring(string &s1, string &s2)
{
    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s2[i + j] != s1[j])
            {
                break;
            }
        }
        if (j == s1.length())
        {
            return true;
        }
    }
}
int main(int argc, char const *argv[])
{
    // char s1[30];
    // char s2[30]; // 字符串可以用数组做，也可以用指针移位
    string s1, s2, s3;
    int len1 = s1.size();
    int len2 = s2.size();
    cin >> s1 >> s2; // 想办法用指针
    if (len1 < len2)
    {
        swap(s1, s2);
    } // 归一化
    for (int i = 0; i < len1; i++)
    { // s3是拼接后的新字符串
        s3 = s1.substr(len1 - i, i) + s1(0, len1 - i);
        // s1[len1] = s1[i];
        if (is_substring(s1, s3))
        {
            cout << "true";
        }
        else
        {
            continue;
        }
    }

    return 0;
}