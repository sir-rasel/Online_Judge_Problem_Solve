#include<bits/stdc++.h>
using namespace std ;

const int n = 100005;
bool arr[n];
vector<int>primeFactor[n];

void prime(){
    int x = sqrt(n);
    for(int j=2;j<=x;j++){
        if(arr[j]==false){
            primeFactor[j].push_back(j);
            for(int i=j+j;i<n;i+=j){
                primeFactor[i].push_back(j);
                arr[i]=true;
            }
        }
    }
    for(int i=x+1;i<n;i++){
        if(arr[i]==false){
            primeFactor[i].push_back(i);
            for(int j=i+i;j<n;j+=i)
                primeFactor[j].push_back(i);
        }
    }
}

int main(){
    prime();
    for(int i=2;i<=100000;i++){
        printf("%d:",i);
        for(auto y:primeFactor[i])
            printf(" %d",y);
        printf("\n");
    }
    return 0;
}
