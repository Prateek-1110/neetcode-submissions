#define srt(x) sort(x.begin(),x.end());
#define pb push_back
#define vvi vector<vector<int>>
#define vi vector<int>
class Solution {
public:
void help (int i , vi&v , int k , vvi&res,vi&curr){
   if(k==0){
       res.pb(curr);
        return;
    }
   for(int j = i;j<v.size();j++){
    if(j>i && v[j]==v[j-1])continue;
    if(v[j]>k)break;
    curr.pb(v[j]);
    help(j+1,v,k-v[j],res,curr);
    curr.pop_back(); 
   }
}
    vector<vector<int>> combinationSum2(vector<int>& v, int k) {
         srt(v);
    vvi res ; vi curr;
    help(0,v,k,res,curr);
    return res;
    }
};
