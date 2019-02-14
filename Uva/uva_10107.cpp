#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int>li;
    int n=0,num;
    while(scanf("%d",&num)==1){
        n++;
        li.push_back(num);
        sort(li.begin(),li.end());
        if(n%2==1) printf("%d\n",li[n/2]);
        else printf("%d\n",(li[n/2]+li[n/2-1])/2);
    }
    return 0;
}
