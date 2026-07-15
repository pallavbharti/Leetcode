class Solution {
public:
int helper(int n){
   // step 1: count number of bits
   if(n==0)return 0;
   int count =0;
   int temp = n;
   while(temp){
    count++;
    temp >>=1;
   }
   // step 2: mask banana hai (2 ^ count) -1
   long long  mask = (1LL << count)-1; // 1LL matlab "1 as long long", overflow nahi hoga
   //step 3:  xor karke flipped bits find karega
   int x = n^mask;
   return x ;
}
    int findComplement(int num) {
        int ans = helper(num);
        return ans;
    }
};