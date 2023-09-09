class Solution
{
public:
    int minimumAverageDifference(vector<int> &nums)
    {
        long long n = nums.size();
        long long totalSum = 0;
        for (auto i : nums)
            totalSum += i;
        long long currentSum = 0;
        long long y;
        long long ans = INT_MAX;
        long long index = -1;
        for (long long i = 0; i < n; i++)
        {
            currentSum += nums[i];
            long long remSum = totalSum - currentSum;

            long long x = currentSum / (i + 1);
            if (i == n - 1)
                y = 0;
            else
            {

                y = remSum / (n - (i + 1));
            }
            // cout<<x<<":"<<y<<endl;
            long long temp = abs(x - y);
            // cout<<temp<<endl;
            if (temp < ans)
            {
                ans = temp;
                index = i;
            }
        }
        return index;
    }
};