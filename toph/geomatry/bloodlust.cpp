#include<bits/stdc++.h>
using namespace std;

const double pi=2*acos(0.0);

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        double ab;
        scanf("%lf",&ab);
        printf("%.10f\n",2*ab*cos(pi/5.0));
    }
    return 0;
}
