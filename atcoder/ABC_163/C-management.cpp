#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>arr(n+1,0);
    for(int i=0;i<n-1;i++){
        int num;
        scanf("%d",&num);
        arr[num]++;
    }
    for(int i=1;i<=n;i++) cout<<arr[i]<<endl;

	return 0;
}
