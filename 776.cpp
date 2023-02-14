#include <iostream>
#include <string>
using namespace std;

bool check(string a, string b)
{
    int len = a.size();
    a += a;
    if (a.find(b) != string ::npos) // find函数的返回值是整数，假如字符串存在包含关系，其返回值必定不等于npos，但如果字符串不存在包含关系，那么返回值就一定是npos。
    // npos是一个常数，通常用来表示不存在的位置，一般为-1
    // a.find(b) 是在a字符串里面查找有没有b的子串。如果它不为空，就是找到了，返回true。如果为空，就是没找到，返回false。
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size())
        swap(a, b);
    if (check(a, b))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}