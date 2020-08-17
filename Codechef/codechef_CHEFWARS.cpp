#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int h,p;
        scanf("%d %d",&h,&p);

        while(h and p){
            h -= p;
            p /= 2;
        }

        if(h>0) printf("0\n");
        else printf("1\n");
    }

    return 0;
}
