class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        char temp = '\0';
        while(i<j){
            temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};