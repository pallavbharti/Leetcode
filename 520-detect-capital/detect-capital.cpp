class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        int count =0;
        for(int i=0 ; i<len ; i++){
            char ch = word[i];
            if(isupper(ch))count++;
        }
        //All letter is Upper
        if(count==len) return true;
        //All letter is lower
        else if(count==0) return true;
        //1 Starting char is capital and all rest are  small
        else if(count==1 && isupper(word[0])) return true;
        else return false;
    }
};