#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef tuple<int,int,int> tiii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        sort(a.begin(),a.end());
        vector<tiii> arr;
        for(int i=0,j=n-1;i<=j;i++,j--){
            arr.push_back(make_tuple(abs(a[i]-a[j]),i,j));
        }
        sort(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++){
            if(get<1>(arr[i])==get<2>(arr[i])){
                if(i+1==arr.size()) printf("%d\n",a[get<1>(arr[i])]);
                else printf("%d ",a[get<1>(arr[i])]);
            }
            else{
                if(i+1==arr.size()) printf("%d %d\n",a[get<1>(arr[i])],a[get<2>(arr[i])]);
                else printf("%d %d ",a[get<1>(arr[i])],a[get<2>(arr[i])]);
            }
        }
    }
    return 0;
}
