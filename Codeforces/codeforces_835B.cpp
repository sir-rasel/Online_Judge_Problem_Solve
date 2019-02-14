#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    char c;
    scanf("%d",&k);
    getchar();
    int sum=0;
    vector<int>n;
    while(scanf("%c",&c) and c!='\n') {
        sum+=(c-'0');
        n.push_back(c-'0');
    }
    if(sum>=k) printf("0\n");
    else{
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            sum-=n[i];
            sum+=9;
            if(sum>=k){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
