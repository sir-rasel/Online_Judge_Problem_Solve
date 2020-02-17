#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int>d;
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {
            if( (n/i)!=i ) d.push_back(n/i);
            d.push_back(i);
        }
    }
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++){
        reverse(s.begin(),s.begin()+d[i]);
    }
    cout<<s<<endl;
    return 0;
}
