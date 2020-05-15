#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>arr(n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);

        int minAns=INT_MAX,maxAns=INT_MIN;
        for(int i=0;i<n;i++){
            int counter=0;
            for(int j=i-1;j>=0;j--){
                if(abs(arr[j]-arr[j+1])<=2) counter++;
                else break;
            }
            for(int j=i+1;j<n;j++){
                if(abs(arr[j-1]-arr[j])<=2) counter++;
                else break;
            }
            minAns = min(minAns,counter);
            maxAns = max(maxAns,counter);
        }
        printf("%d %d\n",minAns+1,maxAns+1);
    }
    return 0;
}
