#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int srt = sqrt(n);
    vector<int>v;
    if(srt*srt==n){
       for(int i=1;i<=srt;i++){
            if(n%i==0) {
                v.push_back(i);
                if(i!=srt) v.push_back(n/i);
            }
        }
    }
    else {
        for(int i=1;i<=srt;i++){
            if(n%i==0) {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) printf("%d\n",v[i]);
    return 0;
}
