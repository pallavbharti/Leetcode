class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char>st;
        int i = 0 , j = 0 ;
        int maxCount = 0;
       while(j < n) {
    if(st.find(s[j]) == st.end()) {
        st.insert(s[j]);
        maxCount=max(maxCount,(j-i+1));
        j++;
    }
    else {
        st.erase(s[i]);
        i++;
    }
}return maxCount;
    }
};