class Solution {
public:
    bool isAnagram(string s, string t) {
        int alphabet1[26] = {0};
        int alphabet2[26] = {0};
        int length = s.size();
        if (t.size() != s.size()) {
            return false;
        }

        for (int i = 0; i < length; i++) {
            alphabet1[s[i] - 'a'] += 1;
            alphabet2[t[i] - 'a'] += 1;
        }

        bool equal = true;
        for (int i = 0; i < 26; i++) {
            if (alphabet1[i] != alphabet2[i]) {
                equal = false;
            }
        }

        return equal;
    }
};
