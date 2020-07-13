#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
const double eps = 1e-4;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        map<int,int>cX,cY;
        for(int i=0;i<4*n-1;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            cX[x]++;
            cY[y]++;
        }

        int x,y;
        for(auto it:cX){
            if(it.second%2==1) x = it.first;
        }
        for(auto it:cY){
            if(it.second%2==1) y = it.first;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
