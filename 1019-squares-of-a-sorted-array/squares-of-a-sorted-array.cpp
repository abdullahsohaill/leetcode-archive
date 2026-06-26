class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // {-ve, -ve .., +ve, +ve, ...}
        // store index till negative, -> 0 -> neg, neg+1 till size-1 TWO partitions
        // pow(num, 2) for squaring
        // merge into a resultant array

        int neg = 0;
        int flag = 0;

        for (int i=0; i<nums.size(); i++) {
            if (flag==0 && nums[i]>=0) {
                neg = i;
                flag = 1;
            }
            nums[i] = pow(nums[i], 2);
        }

        if (flag==0) {
            neg = nums.size();
        }

        // merging
        vector<int> result;

        int neg_idx=neg-1, pos_idx=neg;

        while ((neg_idx >= 0) && (pos_idx<nums.size())) {
            if (nums[neg_idx] <= nums[pos_idx]) {
                result.push_back(nums[neg_idx]);
                neg_idx--;
            }
            else {
                result.push_back(nums[pos_idx]);
                pos_idx++;
            }
        }

        while (neg_idx >= 0) {
            result.push_back(nums[neg_idx]);
            neg_idx--;
        }

        while (pos_idx<nums.size()) {
            result.push_back(nums[pos_idx]);
            pos_idx++;
        }

        return result;
        
    }
};