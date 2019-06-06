#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n,a;
vector<int>card;

bool avg(vector<bool>arr){
    int sum=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]) {
            sum+=card[i];
            c++;
        }
    }
    if( sum%c==0 and (sum/c)==a ) return true;
    else return false;
}

int main(){
    scanf("%d %d",&n,&a);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        card.push_back(num);
    }
    int ans=0;
    for(int i=1;i<(1<<n);i++){
        int temp=i,j=0;
        vector<bool>arr(n,0);
        while(temp>0){
            arr[j++]=temp%2;
            temp/=2;
        }
        if(avg(arr)) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
