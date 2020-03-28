class Solution {
    vector<int>lexArray;
    void generate(int cur,int n){
        if(cur>=n){
            if(cur==n) lexArray.push_back(cur);
            return;
        }
        if(cur!=0){
            lexArray.push_back(cur);
            generate(cur*10,n);
        }
        for(int i=1;i<=9;i++){
            generate(cur*10+i,n);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        if(n<=0) return lexArray;
        else{
            generate(0,n);
            return lexArray;
        }
    }
};
