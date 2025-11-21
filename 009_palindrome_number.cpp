class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> digits;
        int n = x;
        if (n < 0) // negative number
            return false;
        while (n > 0) // get individual digits
        {
            digits.push_back(n % 10);
            n /= 10;
        }
        int size = digits.size();
        for (int i = 0; i < size / 2; i++) // check if integer is pallindrome by comparing digits
        {
            if (digits[i] != digits[size - 1 - i])
                return false;
        }
        return true;
    }
};