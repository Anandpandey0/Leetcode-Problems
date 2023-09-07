// First Approach

class Solution
{
public:
    int partitionString(string s)
    {
        set<char> st;
        int count = 1;
        for (auto c : s)
        {
            auto pos = st.find(c);
            if (pos != st.end())
            {
                count++;
                st.clear();
            }
            st.insert(c);
        }
        return count;
    }
};

// Best Approach
class Solution
{
public:
    int partitionString(string s)
    {
        vector<bool> flag(26, false);
        int i = 0, count = 1;
        while (i < s.length())
        {
            int n = s[i] - 'a';
            if (flag[n] == true)
            {
                count++;
                fill(flag.begin(), flag.end(), false);
            }
            flag[n] = true;
            i++;
        }
        return count;
    }
};