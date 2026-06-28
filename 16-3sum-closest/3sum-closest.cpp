class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // naive: get all trios -> store diff (|target-sum|) for all. return min

        int result, min_diff = INT_MAX;
        int size = nums.size();
        int i=0, left = 1, right = size-1;

        sort(nums.begin(), nums.end());

        while ((i<size-2) && (left<right)) {
            int sum = nums[i] + nums[left] + nums[right];
            int diff = abs(target-sum);

            if (sum == target) {return sum;}
            else if (sum < target) {left++;}
            else {right--;}

            if (diff < min_diff) {
                min_diff = diff;
                result = sum;
            }

            if (left >= right) {
                i++;
                left = i+1;
                right = size-1;
            }
        }

        return result;
    }
};