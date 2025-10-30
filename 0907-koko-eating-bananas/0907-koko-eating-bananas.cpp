class Solution {
public:
    bool ispossible(int maxbananas,vector <int> &nums, int k){
        int time = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=maxbananas){
                time++;
            }else{
                time += (ceil)((double)nums[i]/maxbananas);
            }
            if(time>k){
                return false;
            } 
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int end = *(max_element(piles.begin(),piles.end()));
        int st = 1;
        int ans;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(ispossible(mid,piles,h)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};