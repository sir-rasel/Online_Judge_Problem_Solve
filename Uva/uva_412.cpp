#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) and n!=0){
        int arr[n+5];
        int total=0,coprime=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                total++;
                if(__gcd(arr[i],arr[j])==1) coprime++;
            }
        }
        if(coprime==0) printf("No estimate for this data set.\n");
        else {
            double ans=sqrt((double)(6*total)/coprime);
            printf("%.6lf\n",ans);
        }
    }
    return 0;
}
