class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
        int i = 0;
        int j = array.size() - 1;
        while (i < j && arry[i] % 2 == 1)
            i++; // 是奇数就继续向后扫描
        while (i < j && array[j] % 2 == 0)
        {
            j--; // 是偶数就继续向前扫描
        }
        if (i < j) // 前面两个while循环都退出时，不满足前奇数后偶数的规律，交换数据
            swap(array[i], array[j]);
    }
};