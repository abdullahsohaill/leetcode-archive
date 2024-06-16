class Solution {
public:
    int reverse(int x) {

        int reverse = 0;

        while (x!=0)
        {
            if (reverse<INT_MIN/10 || reverse>INT_MAX/10) 
            {
                return 0;
            }
            else
            {
                int remainder = x%10;
                reverse = reverse*10 + remainder;
                x /= 10;
            }
        }

        if (x<0) {reverse = -1*reverse;}

        return reverse;        
    }
};
