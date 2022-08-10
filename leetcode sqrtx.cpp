class Solution {
public:
   long long int bs(int n)
    {
        int s=0;
        int e= n;
        int ans =-1;
        while(s<=e)
        {
            long long int mid = s+(e-s)/2;
            if(mid * mid > n)
                e = mid-1;
            else if(mid == n)
                return mid;
            else
            {
                ans = mid;
                s= mid+1;
            }
        }
        return ans;
    }
    int mySqrt(int x) {
        return bs(x);
        
    }
};
