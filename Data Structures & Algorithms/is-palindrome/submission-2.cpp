class Solution {
public:
bool f(string s , int i , int j){
    while(j>i){
        if(s[i++]!=s[j--])return false;
    }
    return true;
}
    bool isPalindrome(string s) {
        string ans ="";
        for(int i = 0;i<s.size();i++){
            if(isalnum(s[i]))ans +=tolower(s[i]);
        }
        return f(ans,0,ans.size() - 1);
    }
};
