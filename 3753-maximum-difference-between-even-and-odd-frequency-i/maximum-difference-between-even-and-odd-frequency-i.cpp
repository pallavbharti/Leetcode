class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int mini = 100;
        int maxi = 0;
        for(auto x: mp){
            if(x.second %2 !=0 && x.second>maxi) maxi=x.second;
            else if(x.second %2 ==0 && x.second<mini) mini=x.second;
        }
        return maxi-mini;
    }
};