#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s && s != ".")
    {
        for (int n = s.size(); n > 0; n--)
        {
            if (s.size() % n == 0) // 相当于暴力破解，字符串a的n幂次 s.size()肯定是n的整数倍，如果不是那肯定不满足，不用考虑
            {
                string str, a;
                int m = s.size() / i;  // n个原始串拼接，串串长为m
                str += s.substr(0, m); // 取出子串；str 为子串
                for (int j = 0; j < n; j++)
                {
                    a += str; // 将子串拼接起来
                }
                if (a == s)
                {
                    cout << n << endl;
                    break;
                }
            }
        }
    }
    return 0;
}