#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        getchar();
        string s;
        getline(cin,s);
        map<char,int>check;
        for(int i=0;i<s.size();i++)
            if(s[i]>='a' and s[i]<='z') check[s[i]]++;
        printf("Case %d:\n",cs++);
        bool flag = true;
        for(char i='a';i<='z';i++)
            if(check.count(i)){
                printf("%c - %d\n",i,check[i]);
                flag=false;
            }
        if(flag) printf("-1\n");
        printf("\n");
    }
    return 0;
}
