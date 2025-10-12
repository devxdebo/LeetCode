class Solution {
public:
    int maximumDifference(vector<int>& arr) {
       
        int n = arr.size();

        vector <int> suffix_max(n);

        int max = arr[n-1];

        for(int i=n-2;i>=0;i--){
            suffix_max[i] = max;
            if(arr[i]>max){
                max = arr[i];
            }
        }

        max = INT_MIN;

        for(int i=0;i<n-1;i++){
            int diff = suffix_max[i]-arr[i];
            if(diff>max){
                max = diff;
            }
        }
        if(max<=0){
            max = -1;
        }

        return max;
    }
};