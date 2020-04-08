#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) and n){
        pair<int,int> temp;
        map<pair<int,int>,int>detect;
        for(int i=0;i<n;i++){
            scanf("%d %d",&temp.first,&temp.second);
            detect[temp]++;
        }
        bool flag=true;
        for(auto it:detect){
            auto t = it.first;
            if(detect[{t.second,t.first}]!=it.second){
                flag = false;
                break;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
