class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> pos(256, -1);
        int start = 0;
        int max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (pos[c] >= start)
            {
                start = pos[c] + 1;
                pos[c] = i;
            }
            else
            {
                pos[c] = i;
                max = (i - start + 1 > max) ? i - start + 1 : max;
            }
        }
        return max;
    }
};