#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,w;
        scanf("%d %d",&n,&w);
        priority_queue<int>point;
        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            point.push(y);
        }
        int mov=1;
        int top = point.top();
        point.pop();
        while(!point.empty()){
            if(point.top()+w>=top) {
                point.pop();
                continue;
            }
            mov++;
            top = point.top();
            point.pop();
        }
        printf("Case %d: %d\n",cs++,mov);
    }
    return 0;
}
