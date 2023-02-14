class Solution
{
public:
    int getSum(int n)
    {
        int sum = 0;
        for (int i = 1; i < n + 1; i++)
        {
            sum += i;
        }
        return sum;
    }
};