#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>s;
        if(s.length()<=2) cout<<s<<endl;
        else{
            string ans="";
            for(int i=0;i<s.length();i++)
                if(i%2!=0 or i==0) ans+=s[i];
            cout<<ans<<endl;
        }
    }
    return 0;
}

