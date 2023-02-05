#include <iostream>
using namespace std;
// do while语句限制性循环体后检查条件。不管条件的值如何，至少执行一次循环。
int main(int argc, char const *argv[])
{
    int x = 1;
    while (x < 1)
    {
        cout << "x!" << endl;
        x++;
    }
    int y = 1;
    do
    {
        cout << "y!" << endl;
    } while (y < 1);
    return 0;
}
