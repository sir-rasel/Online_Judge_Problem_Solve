#include<bits/stdc++.h>
using namespace std;

bool bubbleSort(int a[],int b[],int n,int m){
    bool flag=false;
    vector<int>idx;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                idx.push_back(j+1);
                flag=true;
            }
        }
        if(!flag) break;
    }

    sort(idx.begin(),idx.end());
    for(int i=0;i<idx.size();i++){
        if(!binary_search(b,b+m,idx[i])) return false;
    }
    return true;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b;
        scanf("%d %d",&a,&b);
        int arrA[a+5];
        int arrP[b+5];
        for(int i=0;i<a;i++) scanf("%d",&arrA[i]);
        for(int i=0;i<b;i++) scanf("%d",&arrP[i]);
        sort(arrP,arrP+b);


        if(bubbleSort(arrA,arrP,a,b)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
