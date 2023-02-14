#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char str1[100];
    char str2[100];

    cin.getline(str1, 100);

    cin.getline(str2, 100);

    int changdu = strlen(str1);

    for (int i = 0; i < changdu; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {                           // 判断是否在小写字母范围内
            str1[i] = str1[i] - 32; // 转换大写
        }
    }

    changdu = strlen(str2);

    for (int i = 0; i < changdu; i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {                           // 判断是否在小写字母范围内
            str2[i] = str2[i] - 32; // 转换大写
        }
    }

    int ret = strcmp(str1, str2);
    if (ret < 0)
    {
        printf("<");
    }
    else if (ret > 0)
    {
        printf(">");
    }
    else
    {
        printf("=");
    }

    return 0;
}
