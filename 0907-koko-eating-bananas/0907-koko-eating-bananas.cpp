class Solution {
public:
    bool ispossible(long long maxnumofbananas,vector <int> &piles,int h){

        int hours = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=maxnumofbananas){
                hours++;
            }
            else if(piles[i]>maxnumofbananas){
                hours += (piles[i] + maxnumofbananas - 1) / maxnumofbananas;
            }
            if(hours>h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int st = 1;
        long long end = accumulate(piles.begin(),piles.end(),0LL);
        int ans;

        while(st<=end){

            long long mid = st + (end-st)/2;

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