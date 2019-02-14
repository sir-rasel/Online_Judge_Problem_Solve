#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,int>m;
        int res=0,maxx=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(m[num]!=0){
                if(res>maxx) maxx=res;
                while(q.front()!=num){
                    res--;
                    m[q.front()]=0;
                    q.pop();
                }
                m[q.front()]=0;
                q.pop();
                res--;
            }
            q.push(num);
            m[num]++;
            res++;
        }
        if(res>maxx) maxx=res;
        printf("%d\n",maxx);
    }
    return 0;
}
