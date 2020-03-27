#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector<int> a){
    if (count(a.begin(), a.end(), a[0]) == n){
        printf("1\n");
        for (int i = 0; i < n; ++i)
            printf("1 ");
        printf("\n");
        return 0;
    }

    if (n % 2 == 0){
        printf("2\n");
        for (int i = 0; i < n; ++i)
            printf("%d ",i%2+1);
        printf("\n");
        return 0;
    }

    for (int i = 0; i < n; ++i){
        if (a[i] == a[(i + 1) % n]){
            vector<int> ans(n);
            for (int j = 0, pos = i + 1; pos < n; ++pos, j ^= 1)
                ans[pos] = j + 1;
            for (int j = 0, pos = i; pos >= 0; --pos, j ^= 1)
                ans[pos] = j + 1;
            printf("2\n");
            for (int pos = 0; pos < n; ++pos)
                printf("%d ",ans[pos]);
            printf("\n");
            return 0;
        }
    }

    printf("3\n");
    for (int i = 0; i < n-1; ++i)
        printf("%d ",i%2+1);
    printf("3\n");
    return 0;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int> a(n);
        for (int i = 0; i < n; ++i) scanf("%d",&a[i]);
        solve(n,a);
    }
    return 0;
}
