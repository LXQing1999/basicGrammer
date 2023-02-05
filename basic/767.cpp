#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);  // 接收一个字符串，可以接收空格并输出，需包含“#include<string>”
    for (auto &c : s) // auto表示自动元素类型，它会根据不同数组元素自己修改
    //&c ：s 表示c为s中的一个元素，加上&表示可以修改该元素
    {
        if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + 1) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + 1) % 26 + 'A';
        }
    }
    cout << s << endl;
    return 0;
}
