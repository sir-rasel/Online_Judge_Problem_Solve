#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    int n  = s.size();
    ll sum = 0;

    map<string, int> m;
    for (int x = 0; x <= (1 << n); x++){
        vector<ll> arr;
        string num = "";
        string str = "";
        for (int i = 0; i < n; i++){
            num += s[i];
            str += s[i];
            if (x & (1 << i) && i != n - 1){
                str += '+';
                arr.push_back(stoi(num));
                num = "";
            }
        }
        if (m[str] == 0){
            if (num != "") arr.push_back(stoll(num));
            for (int i = 0; i < arr.size(); i++) sum += arr[i];
            m[str]++;
        }
    }
    cout << sum << endl;
    return 0;
}
