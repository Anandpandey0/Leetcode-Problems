class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int posIndex = 0;
        int negIndex = 1;
        for (auto i : nums)
        {
            if (i > 0)
            {
                ans[posIndex] = i;
                posIndex += 2;
            }
            else
            {
                ans[negIndex] = i;
                negIndex += 2;
            }
        }
        return ans;
    }
};