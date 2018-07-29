#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , c , t ;
    scanf("%d" , &t) ;

    while(t--) {
        scanf("%d %d" , &n ,&c) ;
        int a[n+5];
        for(int i = 0 ;i<n ;i++) scanf("%d" , &a[i]) ;
        sort(a , a+n) ;

        int lo = 1 , hi = (a[n-1]-a[0])/(c-1) ;
        while(lo < hi) {
            int mid = (lo+hi+1) >> 1 ;
            int i = 0 , j = 1 , cows = 1;
            while(j<n) {
                if(a[j] - a[i] >=mid) i = j++ ,cows++ ;
                else j++ ;
            }
            if(cows>=c) lo = mid ;
            else hi = mid - 1 ;
        }
        printf("%d\n" , hi) ;
    }
    return 0 ;
}
