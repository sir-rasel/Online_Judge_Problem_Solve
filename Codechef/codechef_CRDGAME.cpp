#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
const double eps = 1e-4;

int digitSum(int n){
    int sum = 0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        int chef=0,monty=0;
        for(int i=0;i<n;i++){
            int a,b;
            scanf("%d %d",&a,&b);

            int chefPower = digitSum(a);
            int montyPower = digitSum(b);

            if(chefPower == montyPower) chef++,monty++;
            else if(chefPower > montyPower) chef++;
            else monty++;
        }

        if(chef == monty) printf("%d %d\n",2,chef);
        else if(chef>monty) printf("%d %d\n",0,chef);
        else printf("%d %d\n",1,monty);
    }
    return 0;
}
