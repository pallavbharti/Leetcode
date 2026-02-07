class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]=='a' && st.top()=='b') {   // " b " ke baad " a " aagaya hai
                st.pop();
                count++;
            }else st.push(s[i]);
        }
        return count;
    }
};