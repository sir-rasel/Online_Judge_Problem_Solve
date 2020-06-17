#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>s;
        int ans = 0;
        map<char,int> a;
        a['x'] = 1;
        a['y'] = 2;
        if(s.size()>=2){
            for(int i=0;i<s.size()-1;i++){
                if(a[s[i]]+a[s[i+1]] == 3){
                    ans++;
                    i++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
