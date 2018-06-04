#include <bits/stdc++.h>
using namespace std;

int main(){
    int totalStops;
    int exitpassenger,enterpassenger;
    int passengercapacity=0;
    int initialpassenger=0;
    cin>>totalStops;
    while(totalStops--){
        cin>>exitpassenger>>enterpassenger;
        initialpassenger=(initialpassenger-exitpassenger)+enterpassenger;
        if(initialpassenger>passengercapacity) passengercapacity=initialpassenger;
    }
    cout<<passengercapacity<<endl;
    return 0;
}
