#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// 深度优先遍历
int n; // dfs要用，所以一定要定义在全局变量外面，如果定义在main里面，就是局部变量了
const int N = 10;
int num[N];         // 暂存数据
bool sign[N] = {0}; // bool数组赋值全为false：
// bool数组赋值全为true:  bool boolArray[16];   memset(boolArray, 1, 16 * sizeof(bool));
// bool boolArray[16] = {1};这种方式只会将第一个bool值初始化为true，其他都是false。
void dfs(int x, int num[], bool sign[]) // dfs深度优先遍历和二叉树的先序遍历很像，都使用了递归
{                                       // x表示传进去的根节点的深度
    if (x == n)                         // 已经扫描到了叶节点，把num里面预存的数据全部输出出来
    {
        for (int i = 0; i < n; i++)
        {
            cout << num[i] + 1 << " ";
        }             // 挨个打印出对应的各个数据
        cout << endl; // 数组长度n就是树高，全部打印出来
        return;
    }
    else
    { // 开启递归
        for (int i = 1; i < n + 1; i++)
        {
            if (!sign[i])
            { // 当该元素sign[i]被标记为false时，!sign[i]表示true 时，可以进入递归
              // sign[i]初始为0，表示没有输出过的结点
                num[x] = i;
                sign[i] = true; // 表示已经扫描过了
                dfs(x + 1, num, sign);
                sign[i] = false;
            }
        }
    }
}
int main(int argc, char const *argv[]) // 全排列
{
    cin >> n;

    dfs(1, num, sign); // 这里的1作为根节点  num用来存储数据，sign是标志位
    return 0;
}
