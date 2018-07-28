#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int people[n+5];
    for(int i=0;i<n;i++) scanf("%d",&people[i]);
    sort(people,people+n);
    int sum=0;
    for(int i=0;i<ceil(n/2.0);i++) sum+=(people[i]/2)+1;
    printf("%d\n",sum);
    return 0;
}
