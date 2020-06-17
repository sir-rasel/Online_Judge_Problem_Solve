#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n;
    scanf("%lld",&n);

    vector<ll>a(n+1,0);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);

    ll ans=0, p_sum=0;
    map<ll,ll>frequency;
    for(int i=0;i<=n;i++){
        p_sum += a[i];
        ll target = ((p_sum % n) + n) % n;
        ans+=frequency[target];
        frequency[target]++;
    }
    printf("%lld\n",ans);

    return 0;
}
//
//
//int subCount(int arr[], int n, int k)
//{
//	int mod[k];
//	memset(mod, 0, sizeof(mod));
//
//	int cumSum = 0;
//	for (int i = 0; i < n; i++) {
//		cumSum += arr[i];
//
//		 as the sum can be negative, taking modulo twice
//		mod[((cumSum % k) + k) % k]++;
//	}
//
//	int result = 0; // Initialize result
//
//	 Traverse mod[]
//	for (int i = 0; i < k; i++)
//
//		 If there are more than one prefix subarrays
//		 with a particular mod value.
//		if (mod[i] > 1)
//			result += (mod[i] * (mod[i] - 1)) / 2;
//
//	 add the elements which are divisible by k itself
//	 i.e., the elements whose sum = 0
//	result += mod[0];
//
//	return result;
//}
