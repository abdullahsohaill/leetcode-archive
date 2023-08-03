class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid = (left+right)/2;
        int index = -1;

        while (left<=right)
        {
            if (left == right)
            {
                if (nums[left]>target){index=left;break;}
                if (nums[left]<target){index=left+1;break;}
                if (nums[left]!=target){break;}
            }
            if (nums[mid]==target)
            {
                return mid;
            }

            if (nums[mid]<target)
            {
                left = mid+1;
            }

            if (nums[mid]>target)
            {
                index = mid;
                right = mid;
            }
            mid = (right+left)/2;
        }
        return index;
    }
};
