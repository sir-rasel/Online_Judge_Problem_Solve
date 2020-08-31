#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<string>s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];

        map<char,int>check;
        for(auto it:s)
            for(auto c:it)
                check[c]++;

        bool flag = true;
        for(auto it:check)
            if(it.second%n != 0){
                flag = false;
                break;
            }

        if(flag) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
