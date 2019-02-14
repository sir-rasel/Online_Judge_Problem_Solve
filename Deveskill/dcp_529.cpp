#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        if(n==1) printf("Both\n");
        else{
            int sq=round(sqrt(n)),cb=round(cbrt(n)),counter1=0,counter2=0;
            if((sq*sq)==n) counter1++;
            if((cb*cb*cb)==n) counter2++;
            if(counter1!=0 and counter2!=0) printf("Both\n");
            else if(counter1!=0 and counter2==0) printf("Perfect Square\n");
            else if(counter1==0 and counter2!=0) printf("Perfect Cube\n");
            else printf("None\n");
        }
    }
    return 0;
}
