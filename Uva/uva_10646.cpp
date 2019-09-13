#include <bits/stdc++.h>
using namespace std;

bool done[52];
string card[53];

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        for(int i = 0; i < 52; ++i) cin>>card[i];
        memset(done,false,sizeof(done));
        int Y = 0;
        for(int i = 0,pos = 26; i < 3; ++i){
            int X = (card[pos][0] >= '2' && card[pos][0] <= '9'? card[pos][0] - '0' : 10);
            Y += X;
            done[pos--] = true;
            for(int j = 0; j < 10-X; ++j) done[pos--] = true;
        }
        printf("Case %d: ",cs++);
        for(int i = 0,j = 0;; ++i){
            if(!done[i]) ++j;
            if(j == Y){
                cout<<card[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
