#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    multiset<int>s;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        auto it = s.upper_bound(arr[i]);
        if(it == s.end())
            s.insert(arr[i]);
        else{
            s.erase(it);
            s.insert(arr[i]);
        }
    }

    printf("%d\n",s.size());
    return 0;
}
