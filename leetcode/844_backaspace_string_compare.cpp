class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i = S.length()-1,j=T.length()-1;
        int skipS=0,skipT=0;
        bool flag = true;

        while(i>=0 or j>=0){
            while(i>=0) {
                if(S[i]=='#') i--,skipS++;
                else if(skipS>0) skipS--,i--;
                else break;
            }
            while(j>=0) {
                if(T[j]=='#') j--,skipT++;
                else if(skipT>0) skipT--,j--;
                else break;
            }
            if(i>=0 and j>=0 and S[i]!=T[j]){
                flag = false;
                break;
            }
            if((i>=0)!=(j>=0)){
                flag=false;
                break;
            }
            i--,j--;
        }

        return flag;
    }
};
