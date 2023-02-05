#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    string r;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            r += s[i];
        }
        else
        {
            r += ' ';
            int j = i;
            while (j < s.size() && s[j] == ' ')
            {
                j++; // 在C++中单引号表示字符，双引号表示字符串。
            }
            i = j - 1;
        }
    }
    cout << r << endl;
    return 0;
}

/*cin做法
int main(int argc, char const *argv[])
{
    string a;
    while (cin >> a)
    {
        cout << a << " ";
    }
    return 0;
}*/
