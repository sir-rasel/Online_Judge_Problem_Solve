#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int r,g,b,w;
        scanf("%d %d %d %d",&r,&g,&b,&w);

        if(r%2==0 and g%2==0 and b%2==0 and w%2==0) printf("Yes\n");
        else if(r%2==1 and g%2==0 and b%2==0 and w%2==0) printf("Yes\n");
        else if(r%2==0 and g%2==1 and b%2==0 and w%2==0) printf("Yes\n");
        else if(r%2==0 and g%2==0 and b%2==1 and w%2==0) printf("Yes\n");
        else if(r%2==0 and g%2==0 and b%2==0 and w%2==1) printf("Yes\n");

        else if((r-1)>=0 and (r-1)%2==0 and (g-1)>=0 and (g-1)%2==0 and (b-1)>=0 and (b-1)%2==0 and (w+1)%2==0) printf("Yes\n");
        else if((r-1)>=0 and (r-1)%2==1 and (g-1)>=0 and (g-1)%2==0 and (b-1)>=0 and (b-1)%2==0 and (w+1)%2==0) printf("Yes\n");
        else if((r-1)>=0 and (r-1)%2==0 and (g-1)>=0 and (g-1)%2==1 and (b-1)>=0 and (b-1)%2==0 and (w+1)%2==0) printf("Yes\n");
        else if((r-1)>=0 and (r-1)%2==0 and (g-1)>=0 and (g-1)%2==0 and (b-1)>=0 and (b-1)%2==1 and (w+1)%2==0) printf("Yes\n");
        else if((r-1)>=0 and (r-1)%2==0 and (g-1)>=0 and (g-1)%2==0 and (b-1)>=0 and (b-1)%2==0 and (w+1)%2==1) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
