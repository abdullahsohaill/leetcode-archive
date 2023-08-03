class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='I'){sum+=1;continue;}
            if (s[i]=='V')
            {
                if (i>0)
                {
                    if (s[i-1]=='I')
                    {
                        sum = sum -1;
                        sum += 4;
                        continue;
                    }
                }
                sum+=5;
                continue;
            }
            if (s[i]=='X')
            {
                if (i>0)
                {
                    if (s[i-1]=='I')
                    {
                        sum = sum -1;
                        sum += 9;
                        continue;
                    }
                }
                sum+=10;
                continue;
            }
            if (s[i]=='L')
            {
                if (i>0)
                {
                    if (s[i-1]=='X')
                    {
                        sum = sum -10;
                        sum += 40;
                        continue;
                    }
                }
                sum+=50;
                continue;
            }
            if (s[i]=='C')
            {
                if (i>0)
                {
                    if (s[i-1]=='X')
                    {
                        sum = sum -10;
                        sum += 90;
                        continue;
                    }
                }
                sum+=100;
                continue;
            }
            if (s[i]=='D')
            {
                if (i>0)
                {
                    if (s[i-1]=='C')
                    {
                        sum = sum -100;
                        sum += 400;
                        continue;
                    }
                }
                sum+=500;
                continue;
            }
            if (s[i]=='M')
            {
                if (i>0)
                {
                    if (s[i-1]=='C')
                    {
                        sum = sum -100;
                        sum += 900;
                        continue;
                    }
                }
                sum+=1000;
                continue;
            }
        }
        return sum;        
    }
};
