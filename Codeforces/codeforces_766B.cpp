#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>line(n+5);
    for(int i=0;i<n;i++) scanf("%d",&line[i]);
    sort(line.begin(),line.begin()+n);
    for(int i=0;i<n-2;i++){
        if(line[i]+line[i+1]>line[i+2]){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
