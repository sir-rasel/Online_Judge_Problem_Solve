#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        string s;
        for(int i=0;i<b;i++){
            s+=('a'+i);
        }
        for(int i=0,j=0;i<n-b;i++){
            s+=s[j];
            j++;
            j%=b;
        }
        cout<<s<<endl;
    }
	return 0;
}
