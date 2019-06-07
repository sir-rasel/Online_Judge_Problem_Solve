#include<bits/stdc++.h>
using namespace std;

int main(){
    int court[10][10];
    for(int i=0;i<9;i++)
        for(int j=0;j<9;){
            char c;
            scanf("%c",&c);
            if(c!='\n') court[i][j]=c-'0',j++;
        }
    bool flag=true;
    map<int,int>check;
    for(int i=0;i<9 and flag;i++){
        for(int j=0;j<9 and flag;j++){
            check[court[j][i]]++;
            if(check[court[j][i]]>1) flag=false;
        }
        check.clear();
    }
    for(int i=0;i<9 and flag;i++){
        for(int j=0;j<9 and flag;j++){
            check[court[i][j]]++;
            if(check[court[i][j]]>1) flag=false;
        }
        check.clear();
    }
    if(flag) printf("Congratulations!\n");
    else printf("Oh No!\n");
    return 0;
}
