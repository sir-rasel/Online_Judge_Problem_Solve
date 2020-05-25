#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];

        bool flag = true;
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(s[i][j]=='1' and s[i+1][j]=='0' and s[i][j+1]=='0'){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}
