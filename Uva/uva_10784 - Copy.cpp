#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int diagonal,cases=0;
    while(cin>>diagonal and diagonal){
        long long int side;
        side=ceil( (3+sqrt(9-(4*(-2)*diagonal)))/2 );
        cout<<"Case "<<++cases<<": "<<side<<endl;
    }
    return 0;
}
