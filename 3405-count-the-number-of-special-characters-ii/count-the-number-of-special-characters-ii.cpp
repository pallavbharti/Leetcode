class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_map<char,int> small;
        unordered_map<char,int> capital;

        for(int i = 0; i < word.size(); i++)
        {
            char ch = word[i];

            if(ch >= 'a' && ch <= 'z')
                small[ch] = i;

            else
                if(capital.find(ch) == capital.end())
                    capital[ch] = i;
        }

        int count = 0;

        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(small.find(ch) != small.end() &&
               capital.find(ch - 32) != capital.end())
            {
                if(small[ch] < capital[ch - 32])
                    count++;
            }
        }

        return count;
    }
};