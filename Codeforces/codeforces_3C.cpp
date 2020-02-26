#include<bits/stdc++.h>
using namespace std;

bool isFirstWin(string s[]){
    if(s[0][0]=='X' and s[0][0]==s[0][1] and s[0][0]==s[0][2]) return true;
    else if(s[1][0]=='X' and s[1][0]==s[1][1] and s[1][0]==s[1][2]) return true;
    else if(s[2][0]=='X' and s[2][0]==s[2][1] and s[2][0]==s[2][2]) return true;

    else if(s[0][0]=='X' and s[0][0]==s[1][0] and s[0][0]==s[2][0]) return true;
    else if(s[0][1]=='X' and s[0][1]==s[1][1] and s[0][1]==s[2][1]) return true;
    else if(s[0][2]=='X' and s[0][2]==s[1][2] and s[0][2]==s[2][2]) return true;

    else if(s[0][0]=='X' and s[0][0]==s[1][1] and s[0][0]==s[2][2]) return true;
    else if(s[0][2]=='X' and s[0][2]==s[1][1] and s[0][2]==s[2][0]) return true;
    return false;
}

bool isSecondWin(string s[]){
    if(s[0][0]=='0' and s[0][0]==s[0][1] and s[0][0]==s[0][2]) return true;
    else if(s[1][0]=='0' and s[1][0]==s[1][1] and s[1][0]==s[1][2]) return true;
    else if(s[2][0]=='0' and s[2][0]==s[2][1] and s[2][0]==s[2][2]) return true;

    else if(s[0][0]=='0' and s[0][0]==s[1][0] and s[0][0]==s[2][0]) return true;
    else if(s[0][1]=='0' and s[0][1]==s[1][1] and s[0][1]==s[2][1]) return true;
    else if(s[0][2]=='0' and s[0][2]==s[1][2] and s[0][2]==s[2][2]) return true;

    else if(s[0][0]=='0' and s[0][0]==s[1][1] and s[0][0]==s[2][2]) return true;
    else if(s[0][2]=='0' and s[0][2]==s[1][1] and s[0][2]==s[2][0]) return true;
    return false;
}

bool isValid(map<char,int>in,string s[]){
    if(isFirstWin(s) and isSecondWin(s)) return false;
    else if(isFirstWin(s) and in['0']+1!=in['X']) return false;
    else if(isSecondWin(s) and in['0']!=in['X']) return false;
    else if(in['X']<in['0']) return false;
    else if(in['X']>5 or in['0']>5) return false;
    else if(abs(in['X']-in['0'])>1) return false;
    return true;
}

int main(){
    string s[3];
    for(int i=0;i<3;i++) cin>>s[i];
    map<char,int>counter;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            counter[s[i][j]]++;

    if(isValid(counter,s)){
        if(counter['X']==0) printf("first\n");
        else if(counter['0']==0) printf("second\n");
        else if(isFirstWin(s)) printf("the first player won\n");
        else if(isSecondWin(s)) printf("the second player won\n");
        else if(counter['0']==counter['X']) printf("first\n");
        else if(counter['.']==0) printf("draw\n");
        else printf("second\n");
    }
    else printf("illegal\n");
    return 0;
}
