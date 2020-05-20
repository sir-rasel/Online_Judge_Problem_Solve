#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
        string s;
        cin>>s;
        vector<int>one,two,three;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one.push_back(i);
            else if(s[i]=='2') two.push_back(i);
            else if(s[i]=='3') three.push_back(i);
        }

        int ans=INT_MAX;
        if(one.size()==0 or two.size()==0 or three.size()==0)
            ans = 0;
        else{
            for(int i=0;i<s.size();i++){
                int m = i;

                auto itOne = lower_bound(one.begin(),one.end(),m);
                if(itOne==one.end()) itOne--;
                if(abs(*itOne-i)>abs(*(itOne-1)-i)) itOne--;

                auto itTwo = lower_bound(two.begin(),two.end(),m);
                if(itTwo==two.end()) itTwo--;
                if(abs(*itTwo-i)>abs(*(itTwo-1)-i)) itTwo--;

                auto itThree = lower_bound(three.begin(),three.end(),m);
                if(itThree==three.end()) itThree--;
                if(abs(*itThree-i)>abs(*(itThree-1)-i)) itThree--;

                int minn = min(*itOne,min(*itTwo,*itThree));
                int maxx = max(*itOne,max(*itTwo,*itThree));

                ans = min(ans,maxx-minn+1);
            }
        }
        printf("%d\n",ans);
	}

	return 0;
}
