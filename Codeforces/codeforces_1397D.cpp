#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        priority_queue<int>q;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            q.push(num);
        }

        while(q.size()>1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();

            a--;
            b--;

            if(a) q.push(a);
            if(b) q.push(b);
        }

        if(q.size() == 1) printf("T\n");
        else printf("HL\n");
    }

    return 0;
}
