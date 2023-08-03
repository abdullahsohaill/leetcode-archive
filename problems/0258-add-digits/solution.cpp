class Solution {
public:
    int addDigits(int num) {
        int result = -11;
        while (result /10 != 0)
        {
            int sum = 0;
            while (num!=0)
            {
                sum += num%10;
                num = num/10;
            }
            result = sum;
            num = sum;
        }
        return result;
        
    }
};
