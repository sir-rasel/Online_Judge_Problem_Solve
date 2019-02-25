#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    scanf("%d",&num);
    bitset<32>bit(num);
    int n = bit.count();
    int smallest=0;
    for(int i=0;i<n;i++) smallest+=pow(2,i);
    printf("%d\n",smallest);
    return 0;
}
