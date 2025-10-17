class Solution {
public:
    string defangIPaddr(string address) {
        
        string result = "";

        for(auto i:address){
            if(i!='.'){
                result.push_back(i);
            }else{
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }
        }
        
        return result;
    }
};