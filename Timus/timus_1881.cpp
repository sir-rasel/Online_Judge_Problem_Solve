#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string word;
    int a,b,c,symbol=0,line=0;
    cin>>a>>b>>c;
    for(int i=0;i<c;i++){
        cin>>word;
        if(symbol+word.size()==b){
            line++;
            symbol=0;
            continue;
        }
        else if(symbol+word.size()>b){
            line++;
            symbol=0;
        }
        symbol+=word.size()+1;
    }
    if(symbol!=0) line++;
    cout<<ceil(double(line)/a)<<endl;
    return 0;
}
