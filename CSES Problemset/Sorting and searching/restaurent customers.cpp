#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    map<int,int>checking;
    for(int i=0;i<n;i++){
        int in,out;
        scanf("%d %d",&in,&out);
        checking[in]++;
        checking[out+1]--;
    }

    int sum = 0, custemer = 0;
    for(auto it:checking){
        custemer = max(custemer,sum+it.second);
        sum += it.second;
    }

    printf("%d\n",custemer);
    return 0;
}
