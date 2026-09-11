class Solution {
public:
    int mySqrt(int x) {
        
        int low = 0, high = x,ans=0;
         if(x==0)
           return 0;
          
           low = 1,high=x,ans=0;

        while (low <= high) 
       {
          int mid = low + (high - low) / 2;
          if (mid<=x/mid)
          {   // to avoid the overflow condition mid^2<=x
            ans = mid;
            low = mid + 1;
          }
          else 
          high = mid - 1;
       }


       return ans;
    }
};