#include <bits/stdc++.h>
using namespace std;

const string a1="register",a2="login",a3="logout",
a4="fail: user already exists",a5= "success: new user added",
a6="fail: no such user",a7="fail: incorrect password",a8="fail: already logged in",a9="success: user logged in",
a10="fail: no such user",a11="fail: already logged out",a12="success: user logged out" ;

class ko{
public:
     bool register1,login ;
     string password ;
     ko()
     {
          register1=false ;
          login=false ;
     }
};

short n;
map <string,ko> l98 ;

void q1(){
     string ji,ko;
     cin>>ji>>ko;
     if(l98[ji].register1) cout<<a4;
     else
     {
          l98[ji].register1=true ;
          l98[ji].password=ko ;
          cout<<a5 ;
     }
}

void q2(){
     string ji,ko ;
     cin>>ji>>ko ;
     if(l98[ji].register1)
     {
          if(l98[ji].login && l98[ji].password==ko)
               cout<<a8 ;
          else if(l98[ji].password==ko)
          {
               cout<<a9 ;
               l98[ji].login=true ;
          }
          else
               cout<<a7 ;
     }
     else
          cout<<a6 ;
}

void q3(){
     string ji ;
     cin>>ji ;
     if(l98[ji].register1)
     {
          if(l98[ji].login)
          {
               l98[ji].login=false ;
               cout<<a12 ;
          }
          else
               cout<<a11 ;
     }
     else
          cout<<a10 ;
}

void solve(string h){
     if(h==a1) q1();
     else if(h==a2) q2();
     else q3();
}

int main(){
    cin>>n ;
    for(short i=0;i<n;i++){
        string o;
        cin>>o;
        solve(o);
        cout<<endl;
    }
    return 0;
}
