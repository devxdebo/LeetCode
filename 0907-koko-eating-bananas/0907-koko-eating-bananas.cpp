class Solution {
public:
    bool ispossible(int mid,vector <int> &arr,int k){
        int time = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                time++;
            }else{
                time += (ceil)((double)arr[i]/mid);
            }
            if(time>k){
                return false;
            }
        }
        return true;
        
    }
    int minEatingSpeed(vector<int>& arr, int k) {

        int end = *(max_element(arr.begin(),arr.end()));
        int st = 1;
        int ans;

        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(ispossible(mid,arr,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        
        return ans;

    }
};