#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<string>str;
    string s,temp;
    getline(cin,s);
    stringstream st(s);

    bool typeFlag=false;
    bool syntaxFlag=false;

    while(st>>temp){
        if(!(temp=="+" or temp=="*" or temp=="==" or temp=="and" or temp=="or")){
            str.push(temp);
        }
        else if( (temp=="+" or temp=="*" or temp=="==" or temp=="and" or temp=="or") and str.size()<=1){
            syntaxFlag=true;
            break;
        }
        else{
            string num1 = str.top();
            str.pop();
            string num2 = str.top();
            str.pop();
            if(temp=="+" or temp=="*"){
                if( (num1=="true" or num1=="false") or (num2=="true" or num2=="false") ){
                    typeFlag=true;
                    break;
                }
                else{
                    long long int a = stoll(num1);
                    long long int b = stoll(num2);
                    long long int res;
                    if(temp=="+") res = a+b;
                    else res = a*b;
                    string t = to_string(res);
                    str.push(t);
                }
            }
            else if(temp=="=="){
                if( (num1=="true" or num1=="false") or (num2=="true" or num2=="false") ){
                    typeFlag=true;
                    break;
                }
                else{
                    long long int a = stoll(num1);
                    long long int b = stoll(num2);
                    if(a==b) str.push("true");
                    else str.push("false");
                }
            }
            else{
                if( !(num1=="true" or num1=="false") or !(num2=="true" or num2=="false") ){
                    typeFlag=true;
                    break;
                }
                if(temp=="and"){
                    if(num1=="true" and num2=="true") str.push("true");
                    else str.push("false");
                }
                else{
                    if(num1=="true" or num2=="true") str.push("true");
                    else str.push("false");
                }
            }
        }
    }
    if(str.size()>1) {
        syntaxFlag=true;
    }
    if(syntaxFlag) cout<< "SYNTAX ERROR"<<endl;
    else if(typeFlag) cout << "TYPE ERROR"<<endl;
    else cout<<str.top()<<endl;

    return 0;
}
