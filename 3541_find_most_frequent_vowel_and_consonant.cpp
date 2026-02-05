class Solution {
public:
    inline int mapCharToInt(char c)
    {
        return c - 'a';
    }
    inline char mapIntToChar(int i)
    {
        return i + 'a';
    }
    inline bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxFreqSum(string s) {
        vector<int> frequency(26, 0); // 26 size vector initialised with 0
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            int char_index = mapCharToInt(s[i]);
            int x = frequency[char_index];
            frequency[char_index] = x + 1;
        }

        int max_vowel_frequency = INT_MIN;
        int max_consonant_frquency = INT_MIN;

        for(int i = 0; i < 26; i++)
        {
            if(isVowel(mapIntToChar(i)))
                max_vowel_frequency = max(frequency[i], max_vowel_frequency);
            else
                max_consonant_frquency = max(frequency[i], max_consonant_frquency);
        }

        return max_vowel_frequency + max_consonant_frquency;
    }
};