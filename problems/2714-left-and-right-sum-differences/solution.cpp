class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer(nums.size());

        int totalSum = 0;
        int leftSum = 0;
        int rightSum = 0;

        for (int i=0; i<nums.size(); i++)
        {
            totalSum += nums[i];
        }
        int sum = totalSum;

        for (int i=0; i<nums.size(); i++)
        {
            rightSum = totalSum - nums[i];
            totalSum = totalSum - nums[i];
            leftSum = sum - nums[i] - rightSum;
            answer[i]=abs(rightSum-leftSum);
        }
        return answer;        
    }
};
