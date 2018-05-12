#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    string a;
    map <string,int> m;
    cin>>test;
    getchar();
    while(test--){
        getline(cin,a);
        m[a]++;
    }
    int large=0;
    for(int i=0;i<m.size();i++){
        if(large<m[i]) large=m[i];
    }
    cout<<large<<endl;
    return 0;
}
