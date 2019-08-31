#include<bits/stdc++.h>
using namespace std;

const int maxx = 1000005;
int failureTable[maxx];
bool flag = true;

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

void KMP(string text,string pattern){
    int n = text.length();
    int m = pattern.length();

    failureTableGenerate(pattern);

    int i=0,j=0;

    while(i<n){
        if(text[i]==pattern[j]){
            i++,j++;
            if(j==m){
                j = failureTable[j-1];
                printf("%d\n",i-m);
                flag=false;
            }
        }
        else {
            if(j!=0) j = failureTable[j-1];
            else i++;
        }
    }
}

int main(){
    int test,cs=1;
    while(cin>>test){
        memset(failureTable,-1,sizeof failureTable);
        flag=true;
        string text,pattern;
        cin>>pattern>>text;
        KMP(text,pattern);
        if(flag) printf("\n");
    }
    return 0;
}
