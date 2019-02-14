#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    while(scanf("%d",&test) and test){
        multiset<int>ms;
        long long int cost = 0;
        for(int i=0;i<test;i++){
            int n;
            scanf("%d",&n);
            while(n--){
                int num;
                scanf("%d",&num);
                ms.insert(num);
            }
            multiset<int>::iterator it = ms.begin();
            multiset<int>::iterator it1 = ms.end();
            it1--;
            cost += *it1-*it;
            ms.erase(it);
            ms.erase(it1);
        }
//        while(ms.size()>0){
//            multiset<int>::iterator it = ms.begin();
//            multiset<int>::iterator it1 = ms.end();
//            it1--;
//            cost += *it1-*it;
//            ms.erase(it);
//            ms.erase(it1);
//        }
        printf("%lld\n",cost);
    }
    return 0;
}
