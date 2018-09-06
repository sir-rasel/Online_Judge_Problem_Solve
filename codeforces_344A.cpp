#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    stack<int>mag;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(mag.empty()) mag.push(num);
        else {
            if(mag.top()!=num) ans++;
            mag.push(num);
        }
    }
    printf("%d\n",++ans);
    return 0;
}
