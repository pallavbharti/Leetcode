class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,int>m;
        for(int i =0 ; i<s.length() ; i++){
            m[s[i]]++;    //char : freq stored 
        }
        for(int i =0 ; i<t.length() ; i++){
            int ch= t[i];
            if(m.find(ch) != m.end()){    //if exists reduce freuency and erase if freq = 0:
                m[ch]--;
                if(m[ch] == 0) m.erase(ch);
            }else return false;
        }
        if(m.size()>0) return false;
        else return true;
    }
};