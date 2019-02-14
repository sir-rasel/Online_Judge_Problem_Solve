#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    unsigned long long int resX,resY;
    cin>>x>>y;
    resX=x*ceil(log(y));
    resY=y*ceil(log(x));
    if(resX==resY) printf("=\n");
    else if(resX>resY) printf("<\n");
    else printf(">\n");
    return 0;
}
