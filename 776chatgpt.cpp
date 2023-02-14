#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_substring(const string &str1, const string &str2)
{
    if (str1.empty() || str2.empty() || str1.length() > str2.length())
        return false;

    for (int i = 0; i <= str2.length() - str1.length(); ++i)
    {
        int j = 0;
        for (; j < str1.length(); ++j)
        {
            if (str2[i + j] != str1[j])
                break;
        }
        if (j == str1.length())
            return true;
    }

    return false;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1.length() < str2.length())
        swap(str1, str2);

    int len = str1.length();
    for (int n = 0; n < len; n++)
    {
        // n = n % len;
        // if (n < 0)
        //     n += len;
        // cout << (str1.substr(len - n) + str1.substr(0, len - n)) << endl;
        cout << (str1.substr(len - n, n) + str1.substr(0, len - n)) << endl;
        // substr复制子字符串，要求从指定位置开始，并具有指定的长度。将前后两个短字符串拼接在一起
        string str3 = (str1.substr(len - n, n) + str1.substr(0, len - n));
        if (is_substring(str2, str3))
        {
            cout << str2 << " is a substring of " << str1 << endl;
        }
        else
        {
            cout << str2 << " is not a substring of " << str1 << endl;
        }
    }
    return 0;
}
