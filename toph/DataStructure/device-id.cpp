#include <bits/stdc++.h>
using namespace std;

int n;
set <int> s, rem;
unordered_map <int, bool> mp;

void clr(){
    rem.clear();
    s.clear();
    mp.clear();
}

int main(){
    int tc;
    scanf("%d",&tc);
    for (int kase = 1; kase <= tc; kase++ ){
        clr();
        for (int i = 1; i <= 100010; i++) rem.insert(i);
        scanf("%d",&n);
        printf("Case %d:\n", kase);
        while(n--){
            int c,num;
            scanf("%d",&c);
            if (c == 1){
                scanf("%d",&num);
                s.insert(num);
                mp[num]=1;
                if (rem.empty() or num > 100001) continue;
                auto it = rem.find(num);
                rem.erase(it);
            }
            else if (c == 2){
                scanf("%d",&num);
                if (s.empty() or mp[num]==0) continue;
                auto it = s.find(num);
                s.erase(it);
                rem.insert(num);
                mp[num]=0;
            }
            else if (c==3){
                auto it = rem.begin();
                printf("%d\n",*it);
            }
        }
    }
    return 0;
}
