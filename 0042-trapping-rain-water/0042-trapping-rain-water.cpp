class Solution {
public:
    int trap(vector<int>& height) {

        int N = height.size();
        int maxheight = height[0];
        int maxheightindex = 0;
        int leftlargest = height[0];
        int rightlargest = height[N-1];
        int water = 0;

        for(int i=1;i<N;i++){
            if(height[i]>maxheight){
                maxheight = height[i];
                maxheightindex = i;
            }
        }

        for(int i=1;i<maxheightindex;i++){
            if(height[i]<=leftlargest){
                water += leftlargest - height[i];
            }else{
                leftlargest = height[i];
            }
        }

        for(int i=N-2;i>maxheightindex;i--){
            if(height[i]<=rightlargest){
                water += rightlargest - height[i];
            }else{
                rightlargest = height[i];
            }
        }

        return water;

    }
};