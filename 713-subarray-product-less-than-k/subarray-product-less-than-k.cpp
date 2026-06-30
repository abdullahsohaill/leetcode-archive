class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // nums = [10,5,2,6], k = 100 ==> output is 8
        // 10, 10-5, 10-5-2, 10-5-2-6
        // 5, 5-2, 5-2-6,.. and so on

        if (k <= 1) return 0;

        int size = nums.size();
        int result = 0;
        int product = 1;
        int left = 0, right = 0;

        while (right < size) {
            product *= nums[right];

            while (product >= k) {
                product /= nums[left];
                left++;
            }

            result += right - left + 1;
            right++;
        }

        return result;
    }
};