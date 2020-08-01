#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e8;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    string rna;
    cin>>rna;

    map<char,int>virus;
    for(auto c:rna){
        if(c == 'G' or c == 'C')
            virus[c]++;
    }

    ll maxx = 0;
    int idx = -1;
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        string s;
        cin>>s;

        map<char,int>r;
        for(auto c:s){
            if(c == 'G' or c == 'C')
                r[c]++;
        }

        ll unit = (virus['G']*r['C']) + (virus['C']*r['G']);
        if(unit > maxx){
            maxx = unit;
            idx = i+1;
        }
    }
    printf("%d\n",idx);

    return 0;
}
