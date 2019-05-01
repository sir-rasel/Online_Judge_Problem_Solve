#include <bits/stdc++.h>
using namespace std;

int main(){
	int test,cs=1;
	scanf("%d",&test);
	while(test--){
		int f=0,sub;
		double sum=0,tcredit=0,num,credit;
		scanf("%d",&sub);
		while (sub--){
			scanf("%lf %lf", &num, &credit);
			if (num<40) {f++; num=0;}
			else if (num<45) num=2;
			else if (num<50) num=2.25;
			else if (num<55) num=2.5;
			else if (num<60) num=2.75;
			else if (num<65) num=3;
			else if (num<70) num=3.25;
			else if (num<75) num=3.5;
			else if (num<80) num=3.75;
			else if (num<=100) num=4;
			sum+=(num*credit),tcredit+=credit;
		}
		printf("Case %d: ",cs++);
		if (f){
			if (f==1) printf("Sorry, you have failed in 1 course!\n");
			else printf("Sorry, you have failed in %d courses!\n",f);
		}
		else printf("%.2lf\n",sum/tcredit);
	}
	 return 0;
}
