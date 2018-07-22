#include <bits/stdc++.h>
using namespace std;

int numberBeDeleted(string a,string b){
    int arr[26]={0};
    for(int i=0;i<a.length();i++){
        arr[a[i]-97]++;
    }
    for(int i=0;i<b.length();i++){
        arr[b[i]-97]--;
    }
    int ans=0;
    for(int i=0;i<26;i++) ans+=abs(arr[i]);
    return ans;
}

int main(){
    int test;
    cin>>test;
    getchar();
    while(test--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        cout<<numberBeDeleted(a,b)<<endl;
    }
    return 0;
}
