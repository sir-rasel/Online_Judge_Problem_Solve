#include <bits/stdc++.h>
using namespace std;

int start=-1,finish=-1;

bool isSort(int a[],int n,map<int,int>m){
    bool flag = true;
    for (int i = 0; i < n; i++) {
		if (a[i] != i) {
            start = i;
			flag = false;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
            finish = i;
			flag = false;
			break;
		}
	}
	return flag;
}

int main(){
    int n;
    scanf("%d",&n);
    int mainArray[n+5],sortArray[n+5];
    for(int i=0;i<n;i++) scanf("%d",&mainArray[i]),sortArray[i]=mainArray[i];
    sort(sortArray,sortArray+n);

    map<int,int>orderDetect;
    for(int i=0;i<n;i++) orderDetect[sortArray[i]]=i;
    for (int i=0;i<n;i++) mainArray[i] = orderDetect[mainArray[i]];

    if(isSort(mainArray,n,orderDetect)) printf("yes\n1 1\n");
    else{
        reverse(mainArray+start,mainArray+finish+1);
        if(isSort(mainArray,n,orderDetect)) printf("yes\n%d %d\n",start+1,finish+1);
        else printf("no\n");
    }
    return 0;
}
