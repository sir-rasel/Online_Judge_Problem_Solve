#include<cstdio>
#include<algorithm>
using namespace std;

struct gardeners{
    int position,payload;
    void seting(int pos,int pay){
        position = pos;
        payload = pay;
    }
    bool operator <(gardeners A){
        return position<A.position;
    }
};

gardeners arr[400010];
int maxD = 1001;
long long int answers[100005];

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int b,n;
    scanf("%d %d",&b,&n);

    int idx=0;
    for(int i=0;i<n;i++){
        int d,s,e;
        scanf("%d %d %d",&d,&s,&e);
        arr[idx++].seting(s,d);
        arr[idx++].seting(e+1,-d);
    }

    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int s,e;
        scanf("%d %d",&s,&e);
        arr[idx++].seting(s,maxD+i);
        arr[idx++].seting(e+1,-maxD-i);
    }
    sort(arr,arr+idx);

    long long int prefixSum = 0;
    long long int currentSum = 0;
    int prev = -1;
    for(int i=0;i<idx;i++){
        gardeners curr = arr[i];
        prefixSum += currentSum * (curr.position - prev);
        prev = curr.position;
        if (curr.payload >= maxD)
            answers[curr.payload - maxD] -= prefixSum;
        else if (curr.payload <= -maxD)
            answers[-(curr.payload + maxD)] += prefixSum;
        else
            currentSum += curr.payload;
    }
    for(int i=0;i<m;i++) printf("%lld\n",answers[i]);
    return 0;
}
