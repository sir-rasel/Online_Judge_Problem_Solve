class Solution {
    void reverseString(int i,int j,vector<char>&s){
        if(i<j){
            swap(s[i],s[j]);
            reverseString(i+1,j-1,s);
        }
    }
public:
    void reverseString(vector<char>& s) {
        reverseString(0,s.size()-1,s);
    }
};
