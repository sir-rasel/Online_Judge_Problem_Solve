#include <bits/stdc++.h>
using namespace std;

string solve(vector<int> a) {
    int g = a[0];
    for(int i=1;i<a.size();i++) g = __gcd(g,a[i]);
    if(g==1) return "YES";
    else return "NO";
}

int main(){
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int a_count;
        cin >> a_count;
        vector<int> a(a_count);
        for (int a_itr = 0; a_itr < a_count; a_itr++) {
            cin>>a[a_itr];
        }
        string result = solve(a);
        cout << result << "\n";
    }
    return 0;
}
