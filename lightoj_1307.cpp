#include<bits/stdc++.h>
using namespace std;

int n;
int segment[2010];

int bs(int a,int b,int point){
    int low=point,mid,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a+b<=segment[mid]) high = mid-1;
        else low=mid+1;
    }
    return low-point;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&segment[i]);
        sort(segment,segment+n);
        int cnt=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                cnt+=bs(segment[i],segment[j],j+1);
            }
        }
        printf("Case %d: %d\n",cs++,cnt);
    }
    return 0;
}
