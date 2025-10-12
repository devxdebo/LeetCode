class Solution {
public:
    int trap(vector<int>& height) {

        int N = height.size();

        vector <int> prefix_array(N);
        vector <int> suffix_array(N);

        int start_val = height[0];

        for(int i=1;i<N;i++){
            prefix_array[i] = start_val;
            if(height[i]>start_val)
                start_val = height[i];
        }

        int end_val = height[N-1];

        for(int i=N-2;i>=0;i--){
            suffix_array[i] = end_val;
            if(height[i]>end_val)
                end_val = height[i];
        }

        int total_water = 0;

        for(int i=1;i<N-1;i++){
            if(height[i]<=prefix_array[i] && height[i]<=suffix_array[i]){
                total_water += min(prefix_array[i],suffix_array[i])-height[i];
            }
        }

        return total_water;
    }
};