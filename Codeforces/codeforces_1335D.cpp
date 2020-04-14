#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string s[9];
        for(int i=0;i<9;i++) cin>>s[i];

        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(s[i][j]=='1') s[i][j]='9';

        for(int i=0;i<9;i++) cout<<s[i]<<endl;
    }
	return 0;
}
