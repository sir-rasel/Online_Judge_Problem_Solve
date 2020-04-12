#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,x;
        scanf("%d %d",&n,&x);
        vector<ll>arr(n);
        for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
        sort(arr.begin(),arr.end(),greater<ll>());

        int counter=0,t=0,j=0;
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if( (sum/(i+1))>=x ) t++;
            else{
                counter+=t;
                sum = arr[i];
                t = 0;
                j = i;
            }
        }
        if(t!=0 and (sum/(n-j))>=x ) counter+=t;
        printf("%d\n",counter);
    }
	return 0;
}
