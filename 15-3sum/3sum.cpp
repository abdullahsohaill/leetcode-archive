#include <algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // nums[i] locked
        // nums[i] + nums[j] + nums[k] = 0 =>  nums[k] = nums[i] - nums[j]

        vector<vector<int>> result;

        for (int i=0; i<nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int target = -1*nums[i];
            unordered_map<int,int> num_map;

            for (int j=i+1; j<nums.size(); j++) {
                int diff = target - nums[j];

                if (num_map.find(diff) != num_map.end()) {
                    result.push_back({nums[i], nums[j], diff});
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) {j++;}
                }
                else {
                    num_map[nums[j]] = j;
                }
            }
        }

        return result;
    }
};