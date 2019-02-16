#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{

    int test;
    cin >> test;
    while(test--)
    {
        int arr[10004];
        for(int i = 0;i <= 10004; i++) arr[i] = 0;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            int m;
            scanf("%d", &m);
            arr[m]++;
        }
        int res = 0;
        for(int i=1; i<10004; i++)
            res = max(res, arr[i-1]+arr[i]);
        printf("%d\n", res);
    }
    return 0;
}
