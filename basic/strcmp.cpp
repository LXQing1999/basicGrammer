#include <stdio.h>
#include <string.h>
int mycmp(const char *s1, const cahr *s2)
{
    int idx = 0;
    /*通过数组的形式来比较
    while (s1[idx] == s2[idx] && s1[idx] != '\0')
    {
        // if(s1[idx]!=s2[idx]){

        // }else if (s1[idx]=='\0'){
        //     break;
        // }
        idx++;
    }
    return s1[idx] - s2[idx];*/
    while (*s1 == *s2 && *s1 != '\0') // 用移动指针来比较
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "Abc";
    printf("%d\n", strcmp(s1, s2)); // 两个字符不相等时，它们之间的差值
    printf("%d\n", 'a' - 'A');
    return 0;
}
