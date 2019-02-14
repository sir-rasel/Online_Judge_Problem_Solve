#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,maxx=0;
    for(int i=0;i<n;i++){
        int sheets;
        cin>>sheets;
        sum+=sheets;
        if(sheets>maxx) maxx=sheets;
    }
    cout<<sum+maxx<<endl;
    return 0;
}
