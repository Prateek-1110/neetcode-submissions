class Solution {
public:
    bool hasDuplicate(vector<int>& v) {
        int n = v.size();
        map<int,int>mpp;
        for(auto it:v){
            if(mpp.find(it)!=mpp.end())return true;
            mpp[it]++;
        }
        return false;
        
    }
};