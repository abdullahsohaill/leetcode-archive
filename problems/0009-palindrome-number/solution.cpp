#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        int l=0; 
        int r=x_str.length()-1;
        while (l<=r)
        {
            if (x_str[l]!=x_str[r])
            {return 0;}
            else
            {l++; r--;}
        }
        return 1;
    }
};
