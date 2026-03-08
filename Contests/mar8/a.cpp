class Solution
{
public:
    int smallestBalancedIndex(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> dup = nums;

        vector<long long> leftSum(n, 0);
        for (int i = 1; i < n; i++)
        {
            leftSum[i] = leftSum[i - 1] + dup[i - 1];
        }

        vector<long long> rightProduct(n, 1);
        for (int i = n - 2; i >= 0; i--)
        {
            rightProduct[i] = rightProduct[i + 1] * dup[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            if (leftSum[i] == rightProduct[i])
            {
                return i;
            }
        }

        return -1;
    }
};
