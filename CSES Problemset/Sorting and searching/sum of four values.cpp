#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tiii;

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<int>a(n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

    vector<tiii> arr;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            arr.push_back(make_tuple(a[i]+a[j], i+1, j+1));
    sort(arr.begin(),arr.end());

    vector<int>ans;
    bool flag = false;
    for(int i=0;i<int(arr.size())-1 and !flag;i++){
        int k = get<0>(arr[i]);
        if(k > x/2) break;

        auto it = lower_bound(arr.begin()+i+1, arr.end(), make_tuple(x-k, 0, 0));

        while(k+get<0>(*it) == x){
            int p, q, r, x, y, z;
            tie(x, y, z) = arr[i];
            tie(p, q, r) = *it;

            if (y == q || y == r || z == q || z == r) {
                it++;
                continue;
            }
            ans.push_back(y);
            ans.push_back(z);
            ans.push_back(q);
            ans.push_back(r);

            flag = true;
            break;
        }
    }

    if(flag) printf("%d %d %d %d\n",ans[0],ans[1],ans[2],ans[3]);
    else printf("IMPOSSIBLE\n");

    return 0;
}
