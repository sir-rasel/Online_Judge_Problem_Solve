#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c[100002];
    vector<int>v;
    map<int,int>ma;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        v.push_back(num);
    }
    int counter=0;
    for(int i=v.size()-1;i>=0;i--){
        if(ma[v[i]]==0){
            counter++;
            ma[v[i]]++;
        }
        c[i]=counter;
    }
    for(int i=0;i<m;i++){
        int num;
        scanf("%d",&num);
        printf("%d\n",c[num-1]);
    }
    return 0;
}
