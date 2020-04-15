#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        ll a,b;
        cin>>a>>b;
        int counter=0;
        ll temp = 2, power = 2;
        while(temp<=b){
            if(temp>=a and temp<=b) counter++;
            power*=4;
            temp += power;
        }
        double ans = (1.0*counter)/(1.0*(b-a+1));
        printf("%.10f\n",ans);
    }
	return 0;
}
