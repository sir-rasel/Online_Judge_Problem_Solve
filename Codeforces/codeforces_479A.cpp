#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector <int> exp;
    exp.push_back((a+b)*c);
    exp.push_back((a*b)+c);
    exp.push_back(a*b*c);
    exp.push_back(a+b+c);
    exp.push_back(a*(b+c));
    exp.push_back(a+(b*c));
    int maximum=exp[0];
    for(int i=1;i<exp.size();i++){
        maximum=max(maximum,exp[i]);
    }
    cout<<maximum<<endl;
    return 0;
}
