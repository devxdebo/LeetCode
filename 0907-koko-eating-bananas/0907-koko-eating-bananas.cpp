class Solution {
public:
    bool ispossible(int maxnumofbananas,vector <int> &piles,int h){

        int hours = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=maxnumofbananas){
                hours++;
            }
            else if(piles[i]>maxnumofbananas){
                hours += ceil(double(piles[i])/double(maxnumofbananas));
            }
            if(hours>h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int st = 1;
        int end = *(max_element(piles.begin(),piles.end()));
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