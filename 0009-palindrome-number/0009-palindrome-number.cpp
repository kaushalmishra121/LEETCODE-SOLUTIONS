class Solution {
public:
    bool isPalindrome(int x) {
        
        int num=x,ans=0,rem;

        if(num<0)
        return 0;

        while(num)
        {
            rem=num%10;
            num/=10;
            if(ans>INT_MAX/10)
            return 0;
            else
            ans=ans*10 + rem;
        }
         if (ans==x)
         return 1;
         else
         return 0;

        
    }
};