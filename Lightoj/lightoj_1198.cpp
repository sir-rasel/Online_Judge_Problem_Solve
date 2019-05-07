#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,num;
        scanf("%d",&n);
        vector<int>opp(n),mine(n);
        for(int i=0;i<n;i++) scanf("%d",&mine[i]);
        for(int i=0;i<n;i++) scanf("%d",&opp[i]);
        sort(mine.begin(),mine.end());
        sort(opp.rbegin(),opp.rend());
        int score=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mine[j]!=-1 and mine[j]>opp[i]){
                    score+=2;
                    mine[j]=opp[i]=-1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(opp[i]!=-1){
                for(int j=0;j<n;j++){
                    if( mine[j]!=-1 and mine[j]==opp[i]){
                        score++;
                        mine[j]=opp[i]=-1;
                        break;
                    }
                }
            }
        }
        printf("Case %d: %d\n",cs++,score);
    }
    return 0;
}
