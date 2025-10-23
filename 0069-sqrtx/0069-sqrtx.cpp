class Solution {
public:
    int mySqrt(int x) {
        
        int st = 0;
        int end = x;
        long long ans;

        while(st<=end){

            long long mid = st + (end-st)/2;

            if(mid*mid == x){
                return mid;
            }else if(mid*mid > x){
                end = mid-1;
            }else{
                st = mid+1;
                ans = mid;
            }
        }

        return (int)ans;
    }
};