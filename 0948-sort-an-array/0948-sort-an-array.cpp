class Solution {
public:
    void merge(vector <int> &vec,int st,int end){
        int ptr1 = st;
        int mid = st + (end-st)/2;

        int m = 0;
        vector <int> temp;

        int ptr2 = mid+1;

        while(ptr1<=mid && ptr2<=end){
            if(vec[ptr1]<=vec[ptr2]){
                temp.push_back(vec[ptr1]);
                ptr1++;
            }else{
                temp.push_back(vec[ptr2]);
                ptr2++;
            }
        }

        while(ptr1<=mid){
            temp.push_back(vec[ptr1]);
            ptr1++;
        }
        while(ptr2<=end){
            temp.push_back(vec[ptr2]);
            ptr2++;
        }

        for(int i=st;i<=end;i++){
            vec[i] = temp[m];
            m++;
        }
    }
    void partition(vector <int> &vec,int st,int end){
        if(st<end){
            int mid = st + (end-st)/2;

            partition(vec,st,mid);
            partition(vec,mid+1,end);
            merge(vec,st,end);

        }
    }
    vector<int> sortArray(vector<int>& vec) {
        partition(vec,0,vec.size()-1);
        return vec;
    }
};