class Solution {
public:
    bool isPalindrome(int x) {
        int rem = 0;
        long long sum = 0;
        int n = x;
        while(n>0){
            rem = n%10;
            sum = sum*10 + rem;
            n/=10;
        }
        if(x==sum)return true;
        else return false;
    }
};