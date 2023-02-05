#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1 = "a";
    string s2 = "b";
    string s3 = "c";
    string s = s1 + ",";
    s = s + s2 + ";";
    s += s3;
    cout << s << endl;
    // 字符本身是没有大小之分的，用字典排序进行比较
    s1 = "ab";
    s2 = "abc";
    s3 = "bcc";
    cout << (s1 <= s2) << endl;
    cout << (s2 != s3) << endl;
    cout << (s3 < s1) << endl;
    return 0;
}