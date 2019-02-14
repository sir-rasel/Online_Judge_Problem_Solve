#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    while(cin>>n and n!=EOF){
        vector<int>v,diff;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        for(int i=0;i<n-1;i++){
            int temp=abs(v[i+1]-v[i]);
            diff.push_back(temp);
        }
        sort(diff.begin(),diff.end());
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(diff[i]!=i+1){
                flag++;
                break;
            }
        }
        if(flag==0) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
