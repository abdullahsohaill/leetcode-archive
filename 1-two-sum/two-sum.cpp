class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> done;
        int size = nums.size();

        for (int i=0; i<size; i++) {
            int diff = target - nums[i];

            if (done.find(diff) != done.end()) {
                return {done[diff], i};
            }

            done[nums[i]] = i;
        }

        return {};
    }

};