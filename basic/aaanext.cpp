#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void get_next(String T, int next[])
{
    int i = 1, j = 0;
    next[1] = 0;
    while (i < T.length)
    {
        if (j == 0 || T.ch[i] == T.ch[j]) // T.ch[]是一个定义的字符串数组
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
}
int main(int argc, char const *argv[])
{

    return 0;
}