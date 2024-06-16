class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0)
        {
            return "";
        }

        string test = strs[0];
        string prefix = "";
        for (int i=0; i<strs[0].length(); i++)
        {
            for (int j=1; j<strs.size(); j++)
            {
                if (strs[j][i]!=test[i])
                {
                    return prefix;
                }
            }
            prefix += test[i];
        }
        return prefix;
    }
};
