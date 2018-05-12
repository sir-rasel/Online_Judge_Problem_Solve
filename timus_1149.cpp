#include <iostream>
#include <cstdio>
using namespace std;

void a(int n);
void s(int n);

int main(){
    int n;
    cin>>n;
    s(n);
    return 0;
}

void a(int n){

}
void s(int n){
    for(int i=1;i<=n;i++){
        printf("(");
        for(int j=1;j<=i;j++){
            printf("(sin(%d)")
        }
    }
}

/// Let An = sin(1–sin(2+sin(3–sin(4+…sin(n))…)
/// Let Sn = (…(A1+n)A2+n–1)A3+…+2)An+1
/// n=4 -> (((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1)sin(1–sin(2+sin(3-sin(4))+1
