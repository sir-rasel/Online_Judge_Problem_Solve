#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,five=0,seven=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==5) five++;
    else if(a==7) seven++;
    if(b==5) five++;
    else if(b==7) seven++;
    if(c==7) seven++;
    else if(c==5) five++;
    if(five==2 and seven==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
