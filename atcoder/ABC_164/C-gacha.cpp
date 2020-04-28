#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    cin>>n;
    set<string>s;
    while(n--){
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<s.size()<<endl;
    return 0;
}
