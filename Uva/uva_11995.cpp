#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        stack<int>st;
        queue<int>qu;
        priority_queue<int>pqu;
        bool stflag=true,quflag=true,pquflag=true;
        while(n--){
            int c,num;
            scanf("%d %d",&c,&num);
            if(c==1){
                st.push(num);
                qu.push(num);
                pqu.push(num);
            }
            else{
                if(st.empty() or st.top()!=num) stflag = false;
                else st.pop();

                if(qu.empty() or qu.front()!=num) quflag = false;
                else qu.pop();

                if(pqu.empty() or pqu.top()!=num) pquflag = false;
                else pqu.pop();
            }
        }
        if(stflag and !quflag and !pquflag) printf("stack\n");
        else if(!stflag and quflag and !pquflag) printf("queue\n");
        else if(!stflag and !quflag and pquflag) printf("priority queue\n");
        else if( (stflag and quflag) or (stflag and pquflag) or (quflag and pquflag) ) printf("not sure\n");
        else printf("impossible\n");
    }
    return 0;
}
