#include<bits/stdc++.h>
using namespace std;

int whichKind(string s){
    bool numberPos=false,charecterPos=false;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' and s[i]<='Z'){
            if(numberPos) return 2;
            charecterPos = true;
        }
        else{
            numberPos = true;
        }
    }
    return 1;
}

void firstKindConversion(string s){
    int row=0,column=0;
    bool flag=true;
    for(int i=1;i<s.length();i++){
        if(s[i]=='C'){
            flag=false;
            continue;
        }
        if(flag==false) column =((column*10)+(s[i]-'0'));
        else row =((row*10)+(s[i]-'0'));
    }

    vector<char>ans;
    while(column){
        int r = (column%26);
        column/=26;
        if(r==0) column--,ans.push_back('Z');
        else ans.push_back(r-1+'A');
    }
    for(int i=ans.size()-1;i>=0;i--) printf("%c",ans[i]);

    printf("%d\n",row);
}

void secondKindConversion(string s){
    int i=0,column=0;

    for(i;i<s.length();i++){
        if(s[i]>='0' and s[i]<='9') break;
    }

    for(int j=i-1;j>=0;j--){
        int val = (s[j]-'A'+1);
        int p = ceil(pow(26,(i-j-1)));
        column +=(val*p);
    }

    printf("R");
    for(int j=i;j<s.length();j++) printf("%c",s[j]);
    printf("C%d\n",column);
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(whichKind(s)==1) secondKindConversion(s);
        else firstKindConversion(s);
    }
    return 0;
}
