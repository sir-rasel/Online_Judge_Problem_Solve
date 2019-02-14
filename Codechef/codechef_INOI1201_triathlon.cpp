#include <bits/stdc++.h>
using namespace std;

struct event{
    int a,b,c;
    int sum;
};

bool comp(event ob,event ob1){
    return ob.sum>ob1.sum;
}

int main(){
    int n;
    cin>>n;
    event ob[n+2];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&ob[i].a,&ob[i].b,&ob[i].c);
        ob[i].sum=ob[i].b+ob[i].c;
    }
    sort(ob,ob+n,comp);
    int maxTime=0;
    int prev = 0;
    for(int i=0;i<n;i++){
        maxTime=max(maxTime,prev+ob[i].a+ob[i].sum);
        prev += ob[i].a;
    }
    printf("%d\n",maxTime);
    return 0;
}
