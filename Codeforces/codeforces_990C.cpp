#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    map<int,long long>braket;
    long long balanceSequence = 0;
    for(int i=0;i<n;i++){
        char c;
        int seqBal = 0,neg=0;
        while(scanf("%c",&c) and c!='\n'){
            if(c=='(') seqBal++;
            else if(seqBal) seqBal--;
            else neg--;
        }
        if(!seqBal and !neg) balanceSequence++;
        if(seqBal and !neg) braket[seqBal]++;
        if(!seqBal and neg) braket[neg]++;
    }
    long long result = balanceSequence*balanceSequence;
    for(auto it:braket) if(it.first>0) result += braket[it.first]*braket[(-1)*(it.first)];
    printf("%lld\n",result);
    return 0;
}

