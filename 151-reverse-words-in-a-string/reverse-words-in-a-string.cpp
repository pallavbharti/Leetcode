class Solution {
public:
    //s.substr(i + 1, j - i);
    string reverseWords(string s) {
        string ans;
        int n = s.length();
        int i=n-1,j=n-1;
        while (j >= 0) {
        while (j >= 0 && s[j] == ' ')
        j--;
        if(j<0)break;
        i=j;
        while (i >= 0 && s[i] != ' ')
        i--;
        if (!ans.empty())
            ans += ' ';
        ans+=s.substr(i + 1, j - i);
        j=i-1;
        }
        return ans;
    }
};