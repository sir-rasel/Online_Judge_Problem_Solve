#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    map<int,int>arr;
    int counter=0;
    vector<int>ind;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(arr.count(num)==0){
            counter++;
            ind.push_back(i+1);
        }
        arr[num]++;
    }
    if(counter<k) printf("NO\n");
    else {
        printf("YES\n");
        for(int i=0;i<k;i++){
            if(i+1==k) printf("%d\n",ind[i]);
            else printf("%d ",ind[i]);
        }
    }
    return 0;
}
