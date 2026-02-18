class Solution
{
public:
    string reverseVowels(string s)
    {
        string res = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (start < end)
        {
            while (start < end && vowels.find(res[start]) == string::npos)
            {
                start++;
                end--;
            }
            while (start < end && vowels.find(res[end]) == string::npos)
            {
                start++;
                end--;
            }
            swap(res[start], res[end]);
            start++;
            end--;
        }
        return res;
    }
};