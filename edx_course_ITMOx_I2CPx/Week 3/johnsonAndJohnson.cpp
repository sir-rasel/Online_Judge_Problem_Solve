#include<cstdio>
#include<algorithm>
using namespace std;

struct job{
    int a,b;
    long long int sa,sb;
    void seting(int a,int b){
        this->a = a;
        this->b = b;
    }
    bool operator <(job A){
        return min(a,b)<min(A.a,A.b);
    }
};

job arr[200005],ordered[200005];
long long int timeA=0,timeB=0;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i].a);
    for(int i=0;i<n;i++) scanf("%d",&arr[i].b);
    sort(arr,arr+n);

    for(int i=0,f=0,l=n-1;i<n;i++){
        if (arr[i].a <= arr[i].b) ordered[f++] = arr[i];
        else ordered[l--] = arr[i];
    }
    for (int i = 0; i < n; ++i){
        ordered[i].sa = timeA;
        timeA += ordered[i].a;
        timeB = max(timeA, timeB);
        ordered[i].sb = timeB;
        timeB += ordered[i].b;
    }

    printf("%lld\n",timeB);
    for(int i=0;i<n;i++){
        if(i+1==n) printf("%lld\n",ordered[i].sa);
        else printf("%lld ",ordered[i].sa);
    }
    for(int i=0;i<n;i++){
        if(i+1==n) printf("%lld\n",ordered[i].sb);
        else printf("%lld ",ordered[i].sb);
    }
    return 0;
}
