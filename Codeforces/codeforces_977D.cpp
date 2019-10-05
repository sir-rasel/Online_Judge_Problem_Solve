#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int countPower3(ll num){
    int ans=0;
    while(num%3==0){
        ans++;
        num/=3;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<pair<int,ll> >v(n);
    for(int i=0;i<n;i++){
        scanf("%lld",&v[i].second);
        v[i].first = -countPower3(v[i].second);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(i+1==n) printf("%lld\n",v[i].second);
        else printf("%lld ",v[i].second);
    }
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define ull unsigned long long
//
//bool taken[105];
//bool flag;
//ull n,a[105],tmp[105];
//vector<ull> v;
//
//void call(ull idx, ull pos){
//    if(idx==n-1){
//        flag=true;
//        for(ull i=0;i<n-1;i++)
//            v.push_back(tmp[i]);
//    }
//
//    for(ull i=0;i<n;i++){
//            if(flag==false && taken[i]==false){
//                if(a[pos]*2==a[i] || a[i]*3==a[pos]){
//                    taken[i]=true;
//                    tmp[idx]=a[i];
//
//                    call(idx+1,i);
//                    taken[i]=false;
//                }
//
//            }
//
//    }
//
//
//
//}
//
//main(){
//    memset(taken, false, sizeof taken);
//    flag=false;
//    cin>> n;
//
//    for(ull i=0;i<n;i++)
//        cin>>a[i];
//
//    for(ull i=0;i<n;i++){
//        call(0,i);
//        if(flag==true){
//            cout<<a[i];
//            break;
//        }
//    }
//
//    for(ull i=0;i<v.size();i++)
//        cout<<" "<<v[i];
//
//    puts("");
//
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//  int n;
//  cin >> n;
//  unordered_set<long long> memo;
//  vector<long long> a(n);
//  for (int i = 0; i < n; i++) {
//    cin >> a[i];
//    memo.insert(a[i]);
//  }
//  for (int i = 0; i < n; i++) {
//    unordered_set<long long> temp = memo;
//    stack<long long> s;
//    s.push(a[i]);
//    int count = 1;
//    bool works = true;
//    while (count < n) {
//      long long top = s.top();
//      if (top % 3 == 0 and temp.count(top / 3)) {
//        s.push(top / 3);
//        count++;
//      } else if (temp.count(top * 2)) {
//        s.push(top * 2);
//        count++;
//      } else {
//        works = false;
//        break;
//      }
//    }
//    if (works) {
//      vector<long long> ans;
//      while (!s.empty()) {
//        ans.push_back(s.top());
//        s.pop();
//      }
//      for (int i = n - 1; i >= 0; i--) {
//        cout << ans[i] << " ";
//      }
//      cout << "\n";
//      break;
//    }
//  }
//  return 0;
//}
