#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    string s;
    cin>>s;

    int ans = 1,count = 1;
    char c = s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==c)
            count++;
        else
            count = 1;

        c = s[i];
        ans = max(ans,count);
    }

    printf("%d\n",ans);
    return 0;
}
