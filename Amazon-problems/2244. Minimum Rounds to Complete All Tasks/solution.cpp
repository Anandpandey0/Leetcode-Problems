class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        // store the frequencies
        map<int, int> mp;
        for (auto &it : tasks)
            mp[it]++;

        int rounds = 0;

        for (auto &it : mp)
        {
            // tasks = [2,3,3]
            if (it.second == 1)
                return -1;
            // tasks = [2,2,3,3,2]
            else if (it.second == 2 || it.second == 3)
                rounds++;

            // tasks = [4,4,4,4,4]
            else if (it.second > 3)
            {
                int rem = it.second % 3;
                // multiple of 3
                rounds += it.second / 3;
                // multiple of 2
                if (rem % 2 == 0)
                    rounds += rem / 2;
                // For tasks = [4,4,4,4], rem == 1;
                else
                    rounds += 1;
            }
        }

        return rounds;
    }
};