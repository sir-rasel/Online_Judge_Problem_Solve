#include <bits/stdc++.h>
using namespace std;

string st[103];
int top=0,visit=0;

void push(string a);
void Forward();
void Back();

int main(){
    int test;
    string command,url;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        st[0]="http://www.lightoj.com/";
        printf("Case %d:\n",i);
        while(1){
            cin>>command;
            if(command=="QUIT") break;
            else if(command=="VISIT"){
                cin>>url;
                cout<<url<<endl;
                push(url);
            }
            else if(command=="FORWARD") Forward();
            else if(command=="BACK") Back();
        }
        top=0;
        visit=0;
    }
    return 0;
}

void push(string a){
    st[++visit]=a;
    top=visit;
}
void Forward(){
    if(visit+1>top)
        cout<<"Ignored"<<endl;
    else
        cout<<st[++visit]<<endl;
}
void Back(){
    if(visit-1<0)
        cout<<"Ignored"<<endl;
    else
        cout<<st[--visit]<<endl;
}
