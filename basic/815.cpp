#include <iostream>
#include <string>
using namespace std;

void print(string a) // 传参数时要按照前面的定义改一下
{
    for (int i = 0; a[i]; i++)
        cout << a[i];
}

int main()
{
    string a;
    getline(cin, a);

    print(a);

    return 0;
}

/*#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void print(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        cout << str[i];
    }
}

int main(int argc, char const *argv[])
{
    char str[101];
    cin.getline(str, 101); // 接受101个字符到m中，其中最后一个为'\0'，所以只看到100个字符输出；
    print(str);
    return 0;
}
*/