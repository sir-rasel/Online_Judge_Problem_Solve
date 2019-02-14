#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) and n){
        priority_queue<int,vector<int>,greater<int> >seq;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            seq.push(num);
        }
        int res=0;
        while(seq.size()>1){
            int a = seq.top();
            seq.pop();
            int b = seq.top();
            seq.pop();
            int sum = a+b;
            res+=sum;
            seq.push(sum);
        }
        printf("%d\n",res);
    }
    return 0;
}
