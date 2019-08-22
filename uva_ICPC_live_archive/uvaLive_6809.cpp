#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll hexadecimalToDecimal(string s) {
	ll len = s.size();
	ll base = 1;
	ll dec_val = 0;
	for (int i=len-1; i>=0; i--) {
		if (s[i]>='0' && s[i]<='9') {
			dec_val += (s[i] - 48)*base;
			base = base * 16;
		}
		else if (s[i]>='A' && s[i]<='F') {
			dec_val += (s[i] - 55)*base;
			base = base*16;
		}
	}
	return dec_val;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        string s1,s2;
        cin>>s1>>s2;

        ll n1 = hexadecimalToDecimal(s1);
        ll n2 = hexadecimalToDecimal(s2);

        int lmove=0,rmove=0;
        bitset<32>left(n1),right(n1);
        for(int i=0;i<32;i++){
            ll temp = left.to_ullong();
            if(temp==n2) break;
            int t = left[31];
            for(int j=31;j>0;j--) left[j]=left[j-1];
            left[0]=t;
            lmove++;
        }
        for(int i=0;i<32;i++){
            ll temp = right.to_ullong();
            if(temp==n2) break;
            int t = right[0];
            for(int j=0;j<31;j++) right[j]=right[j+1];
            right[31]=t;
            rmove++;
        }

        printf("Case #%d: ",cs++);
        if(lmove<rmove)
            printf("%d Left\n",lmove);
        else if(lmove>rmove)
            printf("%d Right\n",rmove);
        else if(lmove==rmove and lmove!=32)
            printf("%d Any\n",lmove);
        else printf("Not possible\n");
    }
	return 0;
}
