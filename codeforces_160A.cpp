#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfCoins;
    int total=0;
    cin>>numberOfCoins;
    vector<int>value;
    for(int i=0;i<numberOfCoins;i++){
        int n;
        cin>>n;
        total+=n;
        value.push_back(n);
    }
    sort(value.begin(),value.end());
    int sum=0;
    int coin=0;
    for(int i=value.size()-1;i>=0 and sum<=total;i--){
        coin++;
        sum+=value[i];
        total-=value[i];
    }
    cout<<coin<<endl;
    return 0;
}
