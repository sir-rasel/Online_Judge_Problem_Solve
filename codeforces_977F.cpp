#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int number[n+5];
    map<int,int>repetation;
    int start,finish,Max = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
        repetation[number[i]] = repetation[number[i]-1]+1;
        if(repetation[number[i]]>Max){
            finish = number[i];
            Max = repetation[number[i]];
            start = finish-Max+1;
        }
    }
    printf("%d\n",Max);
    int cnt=0;
    for(int i=0; ;i++){
        if(number[i]==start){
            printf("%d ",i+1);
            start++;
            cnt++;
        }
        if(cnt==Max) break;
    }
    return 0;
}

