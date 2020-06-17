#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);

        string s;
        cin>>s;

        set<int>pos;
        for(int i=0;i<s.size();i++)
            if(s[i]=='1') pos.insert(i+1);

        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(pos.empty()){
                    res++;
                    pos.insert(i+1);
                    continue;
                }
                auto it = pos.lower_bound(i+1);
                auto it2 = it;

                bool flag1 = false;
                if(it==pos.begin()) flag1 = true;
                it--;

                bool flag=true;
                if(!flag1 and (i+1) - *it <= k ) flag = false;

                if(it2 != pos.end() and *it2 - (i+1) <= k) flag = false;

                if(flag) {
                    res++;
                    pos.insert(i+1);
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
