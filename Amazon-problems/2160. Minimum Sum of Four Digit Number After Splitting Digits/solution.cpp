class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> ans;
        for (int i = 1; i <= 4; i++)
        {
            int x = num % 10;
            ans.push_back(x);
            num /= 10;
        }
        sort(ans.begin(), ans.end());
        // for(auto i : ans)cout<<i<<endl;
        return (ans[0] * 10 + ans[2]) + (ans[1] * 10 + ans[3]);

        // return 0;
    }
};