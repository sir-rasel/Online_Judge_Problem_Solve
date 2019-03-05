#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int a[n+1],b[n+1], pref[n+1];

	pref[0]=0;
	for(long long int i=1; i<=n; i++)
		cin>>a[i];

	for(long long int i=1; i<=n; i++){
		cin>>b[i];
		pref[i] = pref[i-1] + b[i];
	}

	long long int sum = pref[n];
	long long int result = a[1];
	long long int min = 0;
	long long int i=1;
	while(i<=n){
		result = max(result, pref[i] + a[i] - b[i] - min);
		if(pref[i]-a[i]<min) min = pref[i]-a[i];
		i++;
	}

	long long int Max = pref[0] + a[1];
	i=2;
	while(i<=n){
		result = max(result, sum - (pref[i] - a[i]) + Max);
		if(pref[i-1]+a[i]>Max) Max = pref[i-1]+a[i];
		i++;
	}
	cout<<result<<endl;

}
