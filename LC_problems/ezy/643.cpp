class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();

        long long l = 0;
        long long maxsum = LLONG_MIN;
        long long windowsum = 0;

        for (long long r = 0; r < n; r++)
        {
            windowsum += nums[r];

            if (r - l + 1 == k)
            {
                maxsum = max(maxsum, windowsum);

                windowsum -= nums[l];
                l++;
            }
        }

        return (double)maxsum / k;
    }
};