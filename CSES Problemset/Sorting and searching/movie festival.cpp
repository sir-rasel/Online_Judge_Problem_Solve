#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

bool comp(const pair<int,int>&a, const pair<int,int>&b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
}

int main(){
    int n;
    scanf("%d",&n);
    pair<int,int>checking[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&checking[i].first,&checking[i].second);
    sort(checking,checking+n,comp);

    int sum = 0;
    int temp = 0;
    for(auto it:checking){
        if(it.first>=temp){
            sum++;
            temp = it.second;
        }
    }

    printf("%d\n",sum);
    return 0;
}
