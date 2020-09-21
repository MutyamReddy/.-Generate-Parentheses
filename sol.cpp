class Solution {
public:
    vector<string>ans;
    void sol(int n,int open ,int close,string s){
        if(open==n&&close==n){
            ans.push_back(s);
            return;
        }
        else{
            if(open<n){
                sol(n,open+1,close,s+'(');
            }
            if(close<open){
                sol(n,open,close+1,s+')');
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        sol(n,0,0,"");
        return ans;
    }
};
