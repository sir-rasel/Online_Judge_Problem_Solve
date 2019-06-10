#include<bits/stdc++.h>
using namespace std;

stack<char>alice,bob,charlie;

int f(char c){
    if(c=='a') return 1;
    if(c=='b') return 2;
    if(c=='c') return 3;
}

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=s1.size()-1;i>=0;i--) alice.push(s1[i]);
    for(int i=s2.size()-1;i>=0;i--) bob.push(s2[i]);
    for(int i=s3.size()-1;i>=0;i--) charlie.push(s3[i]);
    char c=alice.top();
    alice.pop();
    while(true){
        int temp=f(c);
        if(temp==1) {
            if(alice.empty()) {
                printf("A\n");
                break;
            }
            c=alice.top();
            alice.pop();
        }
        else if(temp==2){
            if(bob.empty()){
                printf("B\n");
                break;
            }
            c=bob.top();
            bob.pop();
        }
        else {
            if(charlie.empty()){
                printf("C\n");
                break;
            }
            c=charlie.top();
            charlie.pop();
        }
    }
    return 0;
}
