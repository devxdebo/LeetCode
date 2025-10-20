class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {

        if(k <= 1) return 0;
        
        int prod = 1;
        int count = 0;
        int i = 0;
        int N = arr.size();
        
        for(int j = 0; j < N; j++){
            prod *= arr[j];
            
            while(prod >= k) {
                prod /= arr[i];
                i++;
            }
            
            count += j - i + 1;
        }
        
        return count;

    }
};