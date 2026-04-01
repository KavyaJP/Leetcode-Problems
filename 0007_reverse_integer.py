class Solution:
    def reverse(self, x: int) -> int:
        is_negative = x < 0
        
        s = str(x)
        s = s[::-1].strip("-")
        x = int(s)
        
        if is_negative:
            x *= -1
        
        # 32-bit signed integer range check
        if x < -2**31 or x > 2**31 - 1:
            return 0
        
        return x