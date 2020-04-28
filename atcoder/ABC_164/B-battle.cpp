#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int x = (a+d-1)/d;
    int y = (b+c-1)/b;
    if(x>=y) printf("Yes\n");
    else printf("No\n");
    return 0;
}
