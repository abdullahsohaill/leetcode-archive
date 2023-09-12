class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size()-1;
        int mid = left + ((right-left)/2);

        if (target>nums[right]){return right+1;}
        while (left<=right)
        {
            if (nums[mid]==target)
            {
                return mid;
            }

            else if (nums[mid]<target)
            {
                left = mid+1;                
            }

            else
            {
                right = mid-1;
            }

            mid = left + ((right-left));
        }
        return left;
        
    }
};
