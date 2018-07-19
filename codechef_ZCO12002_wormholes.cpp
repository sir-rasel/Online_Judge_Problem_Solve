#include <bits/stdc++.h>
using namespace std;

int search_min(int value,int n,int v[]){
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]<=value and v[mid+1]>value) return mid;
        if(v[mid]>value) end = mid-1;
        else start=mid+1;
    }
    if(v[n-1]<=value){
        return n-1;
    }
    else return -1;
}

int search_max(int value,int n,int v[]){
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]>=value and v[mid-1]<value) return mid;
        if(v[mid]<value) start = mid+1;
        else end=mid-1;
    }
    if(v[0]>=value){
        return 0;
    }
    else return -1;
}

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int start[n+5],end[n+5];
    int v[x+5],w[y+5];
    for(int i=0;i<n;i++){
        cin>>start[i]>>end[i];
    }
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    for(int i=0;i<y;i++){
        cin>>w[i];
    }
    sort(v,v+x);
    sort(w,w+y);
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        int vi=search_min(start[i],x,v);
        int wi=search_max(end[i],y,w);
        bool flag1=true,flag2=true;
        if(vi==-1){
            flag1=false;
        }
        if(wi==-1){
            flag2=false;
        }
        if(flag1 and flag2) minimum=min(minimum,abs(w[wi]-v[vi]+1));
    }
    cout<<minimum<<endl;
    return 0;
}
