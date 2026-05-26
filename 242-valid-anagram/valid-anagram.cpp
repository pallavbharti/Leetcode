class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>map;
        for(char ch:s)map[ch]++;
        for(char ch:t)map[ch]--;
        for(auto x:map){
            if(x.second!=0)return false;
        }return true;
    }
};