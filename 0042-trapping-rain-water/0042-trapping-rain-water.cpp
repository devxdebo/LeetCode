class Solution {
public:
    int trap(vector<int>& height) {
        
        int N = height.size();

        int maxheight = height[0];
        int index = 0;

        for(int i=0;i<N;i++){
            if(height[i]>maxheight){
                maxheight = height[i];
                index = i;
            }
        }

        int max1 = height[0];
        int water = 0;

        for(int i=1;i<index;i++){
            if(max1>height[i] && maxheight>height[i]){
                water += min(max1,maxheight) - height[i];
            }
            if(height[i]>max1){
                max1 = height[i];
            }
        }

        max1 = height[N-1];

        for(int i=N-2;i>index;i--){
            if(max1>height[i] && maxheight>height[i]){
                water += min(max1,maxheight) - height[i];
            }
            if(height[i]>max1){
                max1 = height[i];
            }
        }

        return water;
    }
};