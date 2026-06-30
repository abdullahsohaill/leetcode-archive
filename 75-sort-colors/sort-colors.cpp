class Solution {
public:
    void sortColors(vector<int>& nums) {

        // [1,1,2,0,1,1]
        int size = nums.size();
        int left = 0, right = size-1, curr = 0;

        while (curr <= right) {
            if (nums[curr]==0) {swap(nums[left], nums[curr]); left++; curr++;}
            else if (nums[curr]==2) {swap(nums[right], nums[curr]); right--;}
            else {curr++;};
        }
    }
};