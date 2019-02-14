#include <iostream>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int test;
    cin>>test;
    getchar();
    map<string,int>m;
    vector<string>v;
    while(test--){
        string b;
        cin>>b;
        m[b]++;
    }
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
        if(it->second>=2) v.push_back(it->first);
    }
    for(vector<string>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
