#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    stringstream as(a),bs(b);
    int x,y;
    bool flag=true;
    while(as >> x && bs >> y){
        if(x>y) break;
        else if(x<y) {flag=false;break;}
		char c;
		as>>c;
		bs>>c;
    }
    if(flag) cout << a << "\n";
    else cout << b << "\n";
    return 0;
}
