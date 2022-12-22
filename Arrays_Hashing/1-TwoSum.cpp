/*
Use unordered map to store number and its index, then use target - nums = answer 
to find the final answer.

Time Complexity: O(N)
Space Complexity: O(N)
*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            ans = target - nums[i];
            if (hash.count(ans)) {
                return {hash[ans], i};
            }
            hash[nums[i]] = i; 
        }
        return {};
    }

};