#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int>a(n),b(m);

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);

    int ans = 0;
    for(int k=0;k<(1<<9);k++){
        bool finish = true;
        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j=0;j<m;j++){
                if( ((a[i] & b[j]) | k) == k)
                    flag = true;
            }
            if(!flag){
                finish = false;
                break;
            }
        }
        if(finish) {
            printf("%d\n",k);
            break;
        }
    }
    return 0;
}
