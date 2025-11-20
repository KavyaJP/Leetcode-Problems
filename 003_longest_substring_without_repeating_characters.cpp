class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> lastIndex(256, -1); // stores last seen index of each ASCII char
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++)
        {
            char c = s[right];

            // If we've seen this char and it's inside the current window
            if (lastIndex[c] >= left)
            {
                left = lastIndex[c] + 1; // shrink window
            }

            lastIndex[c] = right; // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
