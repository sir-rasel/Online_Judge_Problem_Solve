#include <iostream>
#include <cstdio>
using namespace std;

int short_search(int a[],int n,int value){
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end+1)/2;
        if(a[mid]<value and a[mid+1]>value){
            return mid;
        }
        if(a[mid]==value and a[mid-1]<value){
            return mid-1;
        }
        else if(a[mid]>=value) end = mid-1;
        else if(a[mid]<value) start = mid+1;
    }
    return -1;
}

int tall_search(int a[],int n,int value){
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end+1)/2;
        if(a[mid]>value and a[mid-1]<value){
            return mid;
        }
        if(a[mid]==value and a[mid+1]>value ){
            return mid+1;
        }
        else if(a[mid]>value) end = mid-1;
        else if(a[mid]<=value) start = mid+1;
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int lady[n+5];
    for(int i=0;i<n;i++) scanf("%d",&lady[i]);
    int q;
    scanf("%d",&q);
    while(q--){
        int num;
        scanf("%d",&num);
        int s = short_search(lady,n,num);
        int t = tall_search(lady,n,num);
        if(s!=-1 and t==-1) printf("%d %c\n",lady[s],'X');
        else if(s==-1 and t!=-1) printf("%c %d\n",'X',lady[t]);
        else if(s!=-1 and t!=-1) printf("%d %d\n",lady[s],lady[t]);
        else printf("%c %c\n",'X','X');
    }
    return 0;
}
