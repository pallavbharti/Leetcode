class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>s;
        unordered_set<char>counted;
        int count =0;
        for(char ch:word)s.insert(ch);

        for(char ch:word){
            if(ch >='a' && ch<='z'){
                if(s.find(ch-32)!=s.end()){
                    if(counted.find(ch)!=counted.end())continue;
                    count++;
                    counted.insert(ch);
                }
            }
        }
        return count;
    }
};