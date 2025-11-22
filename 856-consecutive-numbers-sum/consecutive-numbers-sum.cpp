/*Bas odd divisors count karo
Kyunki har odd divisor ek valid consecutive sequence deta hai
Time complexity: O(√N)*/ 
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        for (int d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                if (d % 2 == 1) count++;               // odd divisor
                int other = n / d;
                if (other != d && other % 2 == 1) 
                    count++;                           // odd paired divisor
            }
        }
        return count;
    }
};
