#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

void sort(int a[], int l, int r)
{
    for (int i = l; i < r + 1; i++)
    {
        int min = i; // 每一趟都更新一遍最小值
        for (int j = i + 1; j < r + 1; j++)
        {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        } // 每次将最小值放在前面，结果为升序
    }
} // 简单选择排序，每趟选择一个 min max放在最终位置

int main(int argc, char const *argv[])
{
    int n, l, r;
    cin >> n >> l >> r;
    int a[1001];
    for (int i = 0; i < 1001; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, l, r);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
