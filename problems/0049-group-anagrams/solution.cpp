class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map<string, vector<string>> map;

        for (auto i: strs) {
            string x = i;
            sort(x.begin(), x.end());
            map[x].push_back(i);
        }

        for (auto i: map) {
            result.push_back(i.second);
        }

        return result;
    }
};
