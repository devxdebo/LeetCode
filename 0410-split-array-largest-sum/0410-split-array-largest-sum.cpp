class Solution {
public:
    bool ispossible(int maxpages,vector <int> &arr,int k){
        int numofstudents = 1;
        long long totalpages = 0;
        
        for(int i=0;i<arr.size();i++){
            totalpages += arr[i];
            if(totalpages > maxpages){
                numofstudents++;
                if(numofstudents>k){
                    return false;
                }
                totalpages = arr[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int st = *(max_element(arr.begin(),arr.end()));
        long long end = accumulate(arr.begin(),arr.end(),0);
        long long ans;
        
        while(st<=end){
            
            long long mid = st + (end-st)/2;
            
            if(ispossible(mid,arr,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        
        return (int)ans;
    }
};