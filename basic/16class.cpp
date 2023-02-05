class Solution
{
public:
    string replaceSpaces(string &str)
    {
        string res;
        for (auto i : str)
        {
            if (i == ' ')
            {
                res += "%20";
            }
            else
            {
                res += i;
            }
        }
        return res;
    }
};