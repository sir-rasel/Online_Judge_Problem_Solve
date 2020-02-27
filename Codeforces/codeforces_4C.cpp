#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    map<string,int>data;
    while(n--){
        cin>>s;
        if(data.count(s)==0){
            printf("OK\n");
            data[s]=0;
        }
        else{
            data[s]++;
            cout<<s<<data[s]<<endl;
        }
    }
    return 0;
}
