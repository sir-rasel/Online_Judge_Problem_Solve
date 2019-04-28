#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while (test--){
        printf("Case %d:\n",cs++);
        int n,q,i;
        scanf("%d %d",&n,&q);
        vector<list<int>>s(n);
        while(q--){
            int a,b;
            string command;
            cin>>command;
            if(command=="push"){
                scanf("%d %d",&a,&b);
                a--;
                s[a].push_back(b);
            }
            else if(command=="top"){
                scanf("%d",&a);
                a--;
                if(s[a].begin()!=s[a].end())
                    printf("%d\n",s[a].back());
                else printf("Empty!\n");
            }
            else if(command=="pop"){
                scanf("%d",&a);
                a--;
                if(s[a].begin()!=s[a].end()) s[a].pop_back();
            }
            else{
                scanf("%d %d",&a,&b);
                a--,b--;
                s[a].splice(s[a].end(),s[b]);
            }
        }
    }
    return 0;
}
