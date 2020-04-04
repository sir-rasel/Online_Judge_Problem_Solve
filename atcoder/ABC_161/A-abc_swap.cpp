#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    swap(a,b);
    swap(a,c);
    printf("%d %d %d\n",a,b,c);
    return 0;
}
