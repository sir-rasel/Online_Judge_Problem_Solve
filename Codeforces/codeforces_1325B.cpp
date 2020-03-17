#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        set<int>s;
        while(n--){
            int num;
            scanf("%d",&num);
            s.insert(num);
        }
        printf("%d\n",s.size());
    }
    return 0;
}
