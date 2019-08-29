#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n+5];
	map<int,int>freq;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int ans=n-1;
	for(int i=0;i<n;i++){
        int j=0,k=n-1;
        for(j;j<i;j++){
            freq[a[j]]++;
            if(freq[a[j]]>=2) break;
        }
        for(k;k>=i;k--){
            freq[a[k]]++;
            if(freq[a[k]]>=2) break;
        }
        k++;
        ans=min(ans,k-j);
        freq.clear();
	}
    printf("%d\n",ans);
	return 0;
}
