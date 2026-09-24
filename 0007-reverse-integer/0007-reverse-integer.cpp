#include <climits> // Required for INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit from x

            // --- Overflow Checks ---
            
            // Check for positive overflow
            // If rev > 214748364, then rev * 10 will definitely overflow.
            // If rev == 214748364 and the next digit (pop) > 7, it will overflow.
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            
            // Check for negative overflow
            // If rev < -214748364, then rev * 10 will definitely overflow.
            // If rev == -214748364 and the next digit (pop) < -8, it will overflow.
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;

            rev = rev * 10 + pop;
        }
        return rev;
    }
};