#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    set<int>s;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        s.insert(num);
    }
    for(int i=0;i<m;i++){
        int num;
        scanf("%d",&num);
        s.insert(num);
    }
    int t = s.size();
    int i=1;
    for(auto x:s){
        if(i==t) printf("%d\n",x);
        else printf("%d ",x);
        i++;
    }
    return 0;
}
