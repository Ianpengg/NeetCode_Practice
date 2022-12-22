/*
Use array to store the 26 alphabets ans store and compare the given string with them
Time Complexity: O(N)
Space Complexity: O(26)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Easy case if their lengths not equal.
        if (s.length() != t.length()) return false;
        int table[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            table[s[i] - 'a']++;
            table[t[i]- 'a']--;
          }
        
        for (auto &it : table) {
            if (it)
                return false;
        }
        return true;

    }
};