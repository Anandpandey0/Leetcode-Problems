class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int low = 0, same = 0, high = 0;
        for (auto i : nums)
        {
            if (i < pivot)
                low++;
            else if (i == pivot)
                same++;
            else
                high++;
        }
        int i = 0, j = low, k = low + same;
        cout << i << j << k;
        for (auto it : nums)
        {
            if (it < pivot)
            {
                ans[i] = it;
                i++;
            }
            else if (it == pivot)
            {
                ans[j] = it;
                j++;
            }
            else
            {
                ans[k] = it;
                k++;
            }
        }
        return ans;
    }
};