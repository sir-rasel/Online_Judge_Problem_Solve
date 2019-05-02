#include <bits/stdc++.h>
using namespace std;

const int szzz = 101;

void f(int a,int num,int b){
    vector<int>v;
    while(v.size()!=szzz){
        num *= 10;
        v.push_back(num/b);
        num %= b;
    }

    int last = v.back();
    v.pop_back();
    bool change = 0;
    if(last>=5){
        v.back()++;
        if(v.back()==10){
            v.back() = 0;
            change = true;
            for(int i = v.size() - 2 ; i >= 0 ; i--){
                if(v[i]!=9){
                    v[i]++;
                    change = false;
                    break;
                }
                else v[i] = 0;
            }
        }
    }

    while(v.size() && !v.back()) v.pop_back();
    if(change) cout << a/b + 1;
    else cout << a/b;

    if(v.size()){
        cout << ".";
        for(int i=0;i<v.size();i++) cout << v[i];
    }
    cout << endl;
}

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        f(a,a%b,b);
    }
    return 0;
}
