#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;

        string ans = "";
        for(int i=0;i<n;i++)
            ans += s[i+i];

        cout<<ans<<endl;
    }

    return 0;
}
