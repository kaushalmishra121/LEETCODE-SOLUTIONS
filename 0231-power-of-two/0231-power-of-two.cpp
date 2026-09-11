class Solution {
public:
    bool isPowerOfTwo(int n) {

     // first we have to check for negative numbers
     if (n<1)
     return 0;

     // now check the possible positive numbers using loop

     while(n!=1)
     {
        if(n%2==1)
        return 0;

        else
        n/=2;
     }
        return 1;
        
    }
};