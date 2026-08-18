class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int alphabet1[26] = {0};
        int alphabet2[26] = {0};
        for(int i = 0; i < s.size(); i++) {
            alphabet1[s[i] - 'a'] += 1;
            alphabet2[t[i] - 'a'] += 1;
        }

        for (int i = 0; i < 26; i++) {
            if (alphabet1[i] != alphabet2[i]) {
                return false;
            }
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            groups[s].push_back(strs[i]);
        }

        for (auto const& [key, val] : groups) {
            result.push_back(val);
        }

        return result;
    }
};