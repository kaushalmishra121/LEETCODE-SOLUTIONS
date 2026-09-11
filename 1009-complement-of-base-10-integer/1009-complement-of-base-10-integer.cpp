class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0,rem,mult=1;
        if(n==0)
        return 1;
        while(n)
        {
            rem=n%2;
            rem=rem^1;
            n/=2;
            ans=ans+rem*mult;
            mult=mult*2;
        }
        return ans;
    }
};