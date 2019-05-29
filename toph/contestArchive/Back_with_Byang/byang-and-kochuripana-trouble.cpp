#include<bits/stdc++.h>
using namespace std;

bool k[10000002];
int m;

bool check(int i){
    bool flag = false;
    for(int j = i; j <= m; j += i){
        if(k[j]){
            flag = true;
            break;
        }
    }
    return flag;
}

int solve(){
    for(int i = 2; i <= m + 1; i++){
        bool flag=false;
        flag = check(i);
        if(!flag){
            return i;
        }
    }
}

int main(){
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        k[num]=true;
        m=max(m,num);
    }
    printf("%d\n",solve());
    return 0;
}
