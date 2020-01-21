#include <bits/stdc++.h>
using namespace std;

int result;

int sortedElement(int arr[],int s,int e){
	int counter=1,prev=arr[s];
	bool flag=true;
	for(int i=s+1;i<=e and flag;i++){
		if(flag and prev<=arr[i]) {
				counter++;
				prev = arr[i];
		}
		else flag=false;
	}
	if(counter!=e-s+1) counter=0;
	return counter;
}

void solve(int arr[],int s,int e){
    if(s==e) {
			result = max(1,result);
			return;
    }
    else {
		int mid = (s+e)/2;
		result = max(result,sortedElement(arr,s,mid));
		result = max(result,sortedElement(arr,mid+1,e));
		solve(arr,s,mid);
		solve(arr,mid+1,e);
    }
    return;
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n+5];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	if(sortedElement(arr,0,n-1)==n) result = n;
	else solve(arr,0,n-1);
	printf("%d\n",result);
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//  int n,i,a[16],j;
//  for(cin>>n,i=0;i<n;i++)cin>>a[i];
//	for(i=n;i>0;i>>=1)
//		for(j=0;j<n;j+=i)
//			if (is_sorted(a+j,a+j+i)){cout<<i;return 0;}
//}
