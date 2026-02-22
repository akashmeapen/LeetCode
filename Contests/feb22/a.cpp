class Solution
{
public:
    int scoreDifference(vector<int> &nums)
    {
        int sum1 = 0, sum2 = 0;
        int active = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            if ((nums[i] % 2 == 1) ^ (i % 6 == 5))
            {
                active ^= 1;
            }

            if (active == 0)
            {
                sum1 += nums[i];
            }
            else
            {
                sum2 += nums[i];
            }
        }

        return sum1 - sum2;
    }
};