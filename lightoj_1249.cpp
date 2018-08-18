#include <bits/stdc++.h>
using namespace std;

struct input{
    string name;
    int l,h,w,vol;
};

bool comp(input a,input b){
    if(a.vol<b.vol) return true;
    return false;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        input arr[n+5],thief,took;
        for(int i=0;i<n;i++){
            cin>>arr[i].name>>arr[i].l>>arr[i].w>>arr[i].h;
            arr[i].vol = arr[i].l*arr[i].w*arr[i].h;
        }

        sort(arr,arr+n,comp);
        thief = arr[n-1];
        took = arr[0];

        printf("Case %d: ",cs++);
        if(thief.vol==took.vol) cout<< "no thief\n";
        else cout<<thief.name<< " took chocolate from "<<took.name<<endl;
    }
    return 0;
}
