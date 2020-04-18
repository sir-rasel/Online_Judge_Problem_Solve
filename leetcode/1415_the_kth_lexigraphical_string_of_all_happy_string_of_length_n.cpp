class Solution {
public:
    vector<string> v;
    void backtrack(string s, int n){
        if(v.size()==100) return;
        if(s.size()==n){
            v.push_back(s);
            return;
        }
        for(int i=0;i<3;i++){
            if(i==0 && (s.empty() || s[s.size()-1]!='a'))
                backtrack(s+"a",n);
            if(i==1 && (s.empty() || s[s.size()-1]!='b'))
                backtrack(s+"b",n);
            if(i==2 && (s.empty() || s[s.size()-1]!='c'))
                backtrack(s+"c",n);
        }
    }
    string getHappyString(int n, int k){
        backtrack("",n);
        if(k>v.size()) return "";
        return v[k-1];
    }
};
