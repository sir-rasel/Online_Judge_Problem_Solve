#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MN = 1000005;

ll findPopulation(){
    int n;
    scanf("%d",&n);
    vector<int>detectTeam(MN,0);
    ll population=0;
    for(int i=0;i<n;i++){
        int p;
        scanf("%d",&p);
        p++;
        if(detectTeam[p] == 0) {
            population += p;
            detectTeam[p] = 1;
            if(detectTeam[p] == p) detectTeam[p] = 0;
            continue;
        }
        if(detectTeam[p] < p) {
            detectTeam[p]++;
            if(detectTeam[p] == p) detectTeam[p] = 0;
        }
    }
    return population;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll population = findPopulation();
        printf("Case %d: %lld\n",cs++,population);
    }
    return 0;
}
