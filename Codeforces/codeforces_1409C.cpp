#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;


int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);

        int d = (y-x);
        bool flag = false;

        int temp;
        for(int i=1;i<=d;i++){
            if(d%i==0 and d/i<n){
                temp = i;
                break;
            }
        }

        set<int>ans;
        for(int i=x;i<=y and n;i+=temp){
            ans.insert(i);
            n--;
        }

        for(int i = x-temp;i>0 and n;i-=temp){
            ans.insert(i);
            n--;
        }

        for(int i = y+temp;n;i+=temp){
            ans.insert(i);
            n--;
        }

        for(auto it:ans)
            printf("%d ",it);
        printf("\n");
    }

    return 0;
}
