class Solution {
public:
    int arrangeCoins(int n) {
        int low=0,high=n;
        long long mid;
        while(low<high)
        {
            mid=low+(high-low+1LL)/2;
            long long coins=1LL*mid*(mid+1)/2;
            if (coins<=n)
            low=mid;
            else
            high=mid-1;

        }
        return low;
        
    }
};