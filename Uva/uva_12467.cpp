#include<bits/stdc++.h>
using namespace std;

const int maxx = 1000005;
int failureTable[maxx];

void failureTableGenerate(string pattern){
    int len = pattern.length();
    failureTable[0]=failureTable[1]=0;

    int i=1,j=0;
    while(i<len){
        if(pattern[i]==pattern[j])
            failureTable[i++]=++j;
        else{
            if(j==0) failureTable[i++]=0;
            else j=failureTable[j-1];
        }
    }
}

int KMP(string text,string pattern){
    int n = text.length();
    int m = pattern.length();

    failureTableGenerate(text);

    int i=0,j=0,cnt=0;

    while(i<n){
        if(text[j]==pattern[i]) i++,j++;
        else {
            if(j!=0) j = failureTable[j-1];
            else i++;
        }
        cnt = max(cnt,j);
    }
    return cnt;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        memset(failureTable,-1,sizeof failureTable);
        string text,pattern;
        cin>>text;
        pattern = text;
        reverse(pattern.begin(),pattern.end());
        int needCharecter = KMP(text,pattern);
        for(int i=needCharecter-1;i>=0;i--) printf("%c",text[i]);
        printf("\n");
    }
    return 0;
}
