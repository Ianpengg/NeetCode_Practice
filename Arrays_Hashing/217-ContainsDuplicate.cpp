
/*
Use unordered_set as hash table to store number appeared before, then compare it with the next num.
Time Complexity : O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for (auto &it : nums) {
            if (!table.count(it)){
                return true;
            };
            table.insert(it);
        }
        return false;
    }
};