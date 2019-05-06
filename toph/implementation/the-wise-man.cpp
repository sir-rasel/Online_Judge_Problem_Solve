#include<bits/stdc++.h>
using namespace std;

int  res,row[15],col[15],d1,d2,sum=0;

int main (){
	int n;
	while(cin>>n){
	bool no=false;
		long long  arr[15][15];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>arr[i][j];
				row[i]+=arr[i][j];
				col[j]+=arr[i][j];
				if (i==j)d1+=arr[i][j];
				if(i+j==n-1) d2+=arr[i][j];
			}
		}
		res=row[0];
		for (int i=0;i<n;i++)
			if (row[i]!=res || col[i]!=res || d1!=res || d2!=res){
				no=true;break;
			}
		(no)?cout<<"NO\n":cout<<"YES\n";
		res=0,d1=0,d2=0;
		memset(row,0,sizeof row);
		memset(col,0,sizeof col);
	}
	return 0;
}
