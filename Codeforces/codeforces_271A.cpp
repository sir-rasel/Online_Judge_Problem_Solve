#include <bits/stdc++.h>
using namespace std;

bool check(int arr[]);

int main(){
    int year;
    cin>>year;
    year++;
    while(1){
        int temp=year;
        int arr[4];
        for(int i=0;temp;i++){
            arr[i]=temp%10;
            temp/=10;
        }
        if(check(arr)) break;
        year++;
    }
    cout<<year<<endl;
    return 0;
}

bool check(int arr[]){
    int flag=0;
    if(arr[0]!=arr[1] and arr[0]!=arr[2] and arr[0]!=arr[3]){
        if(arr[1]!=arr[0] and arr[1]!=arr[2] and arr[1]!=arr[3]){
            if(arr[2]!=arr[0] and arr[2]!=arr[1] and arr[2]!=arr[3]){
                if(arr[3]!=arr[0] and arr[3]!=arr[1] and arr[3]!=arr[2]){
                    flag++;
                }
            }
        }
    }
    if(flag==0) return false;
    else return true;
}
