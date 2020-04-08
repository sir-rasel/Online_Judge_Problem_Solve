#include <bits/stdc++.h>
using namespace std;

struct node{
    int time,fine;
    int idx;
    double fineRatio;
    bool operator<(node a){
        return fineRatio>a.fineRatio;
    }
};

int main(){
    int test;
    scanf("%d",&test);
    int i=0;
    while(test--){
        int n;
        scanf("%d",&n);
        node arr[n];
        for(int i=0;i<n;i++){
            scanf("%d%d",&arr[i].time,&arr[i].fine);
            arr[i].idx = i+1;
            arr[i].fineRatio = arr[i].fine/(arr[i].time*1.0);
        }
        sort(arr,arr+n);

        if(i) printf("\n");
        for(int i=0;i<n;i++){
            if(i+1==n) printf("%d\n",arr[i].idx);
            else printf("%d ",arr[i].idx);
        }
        i++;
    }
    return 0;
}
