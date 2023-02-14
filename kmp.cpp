#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> kmp_preprocess(const string &needle)
{
    int m = needle.size();
    vector<int> pi(m);
    int j = 0;
    for (int i = 1; i < m; i++)
    {
        while (j != 0 && needle[i] != needle[j])
        {
            j = pi[j - 1];
        }
        if (needle[i] == needle[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

vector<int> kmp_search(const string &haystack, const string &needle)
{
    int n = haystack.size(), m = needle.size();
    vector<int> pi = kmp_preprocess(needle); // 用来存储next数组
    vector<int> matches;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j != 0 && haystack[i] != needle[j])
        {
            j = pi[j - 1];
        }
        if (haystack[i] == needle[j])
        {
            j++;
        }
        if (j == m)
        {
            matches.push_back(i - m + 1);
            j = pi[j - 1];
        }
    }
    return matches;
}

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;
    vector<int> matches = kmp_search(haystack, needle);
    for (int i : matches)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
