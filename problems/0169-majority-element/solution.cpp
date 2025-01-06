class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for (auto i: nums) {
            freq[i]++;
        }
        
        int count = 0;
        int max = 0;

        for (auto elem: freq) {
            if (elem.second > count) {
                max = elem.first;
                count = elem.second;
            }
        }

        return max;        
    }
};
