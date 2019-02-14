#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();
    map<string,int>repeat;
    int counter=0;
    while(n--){
        string brand;
        getline(cin,brand);
        if(repeat[brand]==0) repeat[brand]++;
        else counter++;
    }
    cout<<counter<<endl;
    return 0;
}
