from math import ceil

class Solution:
    def findNthDigit(self, n: int) -> int:
        decimal_coordinate, digit, total_digit_till_now = 1, 1, 9
        
        while n - total_digit_till_now > 0:
            n -= total_digit_till_now
            digit += 1
            decimal_coordinate *= 10
            total_digit_till_now = 9 * decimal_coordinate * digit
        
        remaining_number = (decimal_coordinate - 1) + ceil(n / digit)
        resulting_digit = str(remaining_number)[-1] if n % digit == 0 else str(remaining_number)[(n % digit) - 1]
        
        return int(resulting_digit)