#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    map<int,int>indexing;
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        indexing[num]=i;
    }
    int q;
    long long int vasya=0,petya=0;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int num;
        scanf("%d",&num);
        vasya+=indexing[num];
        petya+=n-indexing[num]+1;
    }
    cout<<vasya<< " "<<petya<<endl;
    return 0;
}
