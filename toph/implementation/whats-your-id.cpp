#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	char id[12];
	scanf("%d",&t);
	while (t--){
		scanf("%s",id);
		if (id[5]=='4') printf("EEE ");
		else if (id[6]=='1') printf("Economics ");
		else if (id[6]=='4') printf("English ");
		else if (id[6]=='5') printf("CSE ");
		else if (id[6]=='6') printf("BBA ");
		else if (id[6]=='7') printf("LLB ");
		if (id[2]=='1') printf("Spring ");
		else if (id[2]=='2') printf("Summer ");
		else if (id[2]=='3') printf("Autumn ");
		printf("20%c%c\n",id[0],id[1]);
	}
	return 0;
}
