#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<char>v1,v2;
    char c;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        scanf("%c",&c);
        v1.push_back(c);
    }
    getchar();
    for(int i=0;i<n;i++){
        scanf("%c",&c);
        v2.push_back(c);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int mor=n;
    for(int i=n-1;i>=0;i--)
        if(v2[mor-1]>=v1[i]) mor--;
    int sher=0;
    for(int i=0;i<n;i++)
        if(v2[i]>v1[sher]) sher++;
    printf("%d\n%d\n",mor,sher);
    return 0;
}
