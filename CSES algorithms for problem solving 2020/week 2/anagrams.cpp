#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

int main(){
    int n;
    scanf("%d",&n);
    map<string,bool>group;

    while(n--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        group[s] = true;
    }

    cout<<group.size()<<endl;

    return 0;
}
