/*
Use unordered_map as hash table to store different words and its group_index.
M is the length of each string
Time Complexity: sort(): O(MLogM), final: O(N*MLogM)
Space Complexity: O(N*M)
*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {     
        vector<vector<string>> ans;
        unordered_map<string, int> dict;

        for (int i = 0; i < strs.size(); i++) {
            // copy the strs[i]
            string temp = strs[i];
            // sort, so we can easyily check the two words is anagrams or not.
            sort(temp.begin(), temp.end());
            
            // If the sorted version of the string strs[i] is not in the dict,
            // store it in the dict and give it a group index. 
            // The ans.size() is used to represent which group the word belongs to, 
            // and the strs[i] is added to the ans.
            if (!dict.count(temp)) {
              dict[temp] = ans.size();
              ans.push_back({});
            }
            ans[dict[temp]].push_back(strs[i]); 
        }
        
        return ans;
    }
};