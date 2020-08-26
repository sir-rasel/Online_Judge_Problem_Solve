#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        string s;
        int x;
        cin>>s>>x;

        int n = s.size();

        bool flag = true;
        string ans(n, '1');
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                if((i-x)>=0) ans[(i-x)] = s[i];
                if((i+x)<n) ans[(i+x)] = s[i];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                int count = 0;
                if( ((i-x)>=0 and ans[i-x] == '0') or i<x ) count++;
                if( ((i+x)<n and ans[i+x] == '0') or i+x>=n) count++;

                if(count == 2){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) cout<<ans<<endl;
        else printf("-1\n");
    }

    return 0;
}
