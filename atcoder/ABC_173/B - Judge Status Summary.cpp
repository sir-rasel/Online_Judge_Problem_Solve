#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e8;
const double eps = 1e-4;

int main(){
    int n;
    scanf("%d",&n);
    string s;
    map<string,int>ch;
    string l[] = {"AC", "WA", "TLE", "RE"};
    for(int i=0;i<n;i++){
        cin>>s;
        ch[s]++;
    }
    for(auto it: l){
        cout<<it<< " x "<<ch[it]<<endl;
    }
    return 0;
}
