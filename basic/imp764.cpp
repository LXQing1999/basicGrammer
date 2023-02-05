#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[101];
    char b[101];
    char c[101];
    string d;
    cin.getline(a, 101);
    for (int i = 0; i < strlen(b); i++)
    {
        b[i] = '0' - '0'; // 初始化
        cout << b[i];
    }
    cout << endl;
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] += a[i] + a[(i + 1) % strlen(a)];
        // cout << typeid(a[i] + a[(i + 1) % strlen(a)]).name() << "   " << typeid(b[i]).name();
        // cout << endl;
        cout << b[i];
        // c += a[i] + a[(i + 1) % strlen(a)];
        // cout << c;
        d += a[i] + a[(i + 1) % strlen(a)]; // b[i]（char b[101];）   c（char c[101];）
        // 只有这个string d;才可以
        // 我的理解是这样，b[i]是数组元素，  c整个输出是字符串，错误的理解，回去再说
    }
    cout << endl;
    // cout << d << endl; // 这个cout位置不是你一开始就放在上面的for循环里面的吗  别动wo
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     string a;
//     string b;
//     // char a[101];
//     // char b[101];
//     getline(cin, a);
//     for (int i = 0; i < a.size(); i++)
//     {
//         b += a[i] + a[(i + 1) % a.size()];
//     }
//     cout << b;

//     return 0;
// }
