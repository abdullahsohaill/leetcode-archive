class Solution {
public:
    string removeDuplicates(string s) {
        bool flag = false;
        while (s.length()!=0 && flag == false)
        {
            flag = true;
            for (int i=1; i<s.length(); i++)
            {
                if (s[i]==s[i-1])
                {
                    s.erase(i-1,2);
                    flag = false;
                    break;
                }
            }            
        }
        return s;        
    }
};
