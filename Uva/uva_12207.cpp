#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    int p,c,cs=1;
    while(scanf("%d %d",&p,&c) and (p and c)){
        p = min(p,c);
        list<int>li;
        for(int i=1;i<=p;i++) li.push_back(i);
        char com[10];
        printf("Case %d:\n",cs++);
        for(int i=0;i<c;i++){
            scanf("%s",com);
            if(com[0]=='N'){
                printf("%d\n",li.front());
                li.push_back(li.front());
                li.pop_front();
            }
            else{
                int n;
                scanf("%d",&n);
                li.remove(n);
                li.push_front(n);
            }
        }
    }
    return 0;
}
