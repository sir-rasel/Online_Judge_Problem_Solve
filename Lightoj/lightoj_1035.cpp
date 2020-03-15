#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int> > >sequence(102);

vector<pair<int,int> > primeFactorize(int n){
    vector<pair<int,int> >temp;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int counter=0;
            while(n%i==0){
                n/=i;
                counter++;
            }
            temp.push_back({i,counter});
        }
    }
    if(n>1) temp.push_back({n,1});
    return temp;
}

void preCalculate(){
    for(int i=2;i<=100;i++){
        sequence[i]=primeFactorize(i);
    }

}

void printPrime(int n){
    map<int,int>state;
    for(int i=2;i<=n;i++){
        for(auto it:sequence[i]){
            state[it.first]+=it.second;
        }
    }
    map<int,int>::iterator last = state.end();
    last--;
    for(map<int,int>::iterator it=state.begin();it!=state.end();it++){
        if(it==last){
            printf("%d (%d)\n",it->first,it->second);
        }
        else printf("%d (%d) * ",it->first,it->second);
    }
}

int main(){
    preCalculate();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d = ",cs++,n);
        printPrime(n);
    }
    return 0;
}
