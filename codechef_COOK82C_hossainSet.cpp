#include <bits/stdc++.h>
using namespace std;

bool comp(long long int a,long long int b){
    return a>b;
}

int main(){
    long long int n,m;
    cin>>n>>m;
    long long int number[1000005];
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    sort(number,number+n,comp);
    queue<long long int>q1,q2;
    for(int i=0;i<n;i++){
        q1.push(number[i]);
    }
    int count =1;
    long long int answer=0;
    while(m--){
        int query;
        cin>>query;
        while(count<=query){
            if(q1.front()>=q2.front()){
                answer = q1.front();
                q1.pop();
            }
            else{
                answer = q2.front();
                q2.pop();
            }
            q2.push(answer/2);
            count++;
        }
        cout<<answer<<endl;
    }
    return 0;
}
