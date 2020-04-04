#include <bits/stdc++.h>
using namespace std;

int run(unsigned long int *r, int no, int n){
    int c = 0;
    for(int i = no; i < n; ++i){
        int d = r[i] % 10;
        for(int j = -1; j <=1; ++j){
            if(d+j <= 9 && d+j >= 0){
                r[n+c] = r[i]*10 + d+j;
                c++;
            }
        }
    }
    return n+c;
}

int main(){
    int k;
    scanf("%d",&k);
    unsigned long int r[k*10] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int no = 0, p = 0;
    while(true){
        if(n >= k){
            cout << r[k-1] << endl;
            break;
        }
        int p = n;
        n = run(r, no, n);
        no = p;
    }
    return 0;
}
