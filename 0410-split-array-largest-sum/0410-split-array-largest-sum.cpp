class Solution {
public:
    bool ispossible(int maxtime,vector <int> arr,int k){
        int numofpeople = 1;
        int N = arr.size();
        long long sum = 0;
        for(int i=0;i<N;i++){
            sum += arr[i];
            if(sum>maxtime){
                numofpeople++;
                if(numofpeople>k){
                    return false;
                }
                sum = arr[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& arr, int k) {
        int N = arr.size();
        
        int st = *(max_element(arr.begin(),arr.end()));
        long long end = accumulate(arr.begin(),arr.end(),0);
        long long ans;
        
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