class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> mp;

        for (auto st : strs) {
            map<char, int> m;

            for (int i = 0; i < st.size(); i++) {
                m[st[i]]++;
            }

            if (mp.find(m) == mp.end()) {
                vector<string> temp;
                temp.push_back(st);
                mp[m] = temp;
            } else {
                mp[m].push_back(st);
            }
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};