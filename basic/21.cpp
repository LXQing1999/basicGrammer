#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
} // 采用数组暂存斐波那契数列，区别于递归

// 把int fib嵌套进入这个class 里头去，框架是固定,class solution   public 自带数据类型和对数据类型进行操作的函数的结构体，
// 输入是int n，输出是函数的返回值  return，if判断了，该返回return n 还是返回 fib（n-1）+fib（n-2），输入输出是明确的，只是没有体现调用过程