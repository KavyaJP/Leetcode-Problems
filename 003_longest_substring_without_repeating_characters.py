class Solution(object):
    def lengthOfLongestSubstring(self, s):
        s1 = ""
        if len(s) == 1:
            return 1
        length = 0
        maximum = 0
        for i in s:
            if i in s1:
                if maximum < length:
                    maximum = length
                length = 0
                s1 = ""
                s1 += i
                length += 1
            else:
                s1 += i
                length += 1
                print(s1)
        return maximum
