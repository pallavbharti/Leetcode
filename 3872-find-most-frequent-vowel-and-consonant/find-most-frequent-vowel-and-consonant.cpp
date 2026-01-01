class Solution {
public:
    bool isVowel(char ch) {
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

    int maxFreqSum(string s) {
    unordered_map<char,int> vowelFreq;
    unordered_map<char,int> consonantFreq;

    for(char ch : s) {
            if(isVowel(ch)) {
                vowelFreq[ch]++;
            } else {
                consonantFreq[ch]++;
            }
        }
int maxVowel = 0;
for(auto it : vowelFreq) {
    maxVowel = max(maxVowel, it.second);
}
int maxCons = 0;
for(auto it : consonantFreq){
    maxCons = max(maxCons,it.second);
} return maxVowel+maxCons;
    }
};