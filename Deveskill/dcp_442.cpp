#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int arr[MAX];

void calculate(){
    int increment=0;
    for(int i=1;i<=MAX;i++){
        int temp=sqrt(i+1);
        if(temp*temp ==(i+1)){
            arr[i]=++increment;
        }
        else arr[i]=0;
    }
}

int main(){
    calculate();
    int test,n,k,res;
    cin>>test;
    while(test--){
        cin>>n>>k;
        res=arr[n];
        if(res==k) cout<<"I am married now"<<endl;
        else cout<<"Baba amar ki biye hobe na"<<endl;
    }
    return 0;
}
