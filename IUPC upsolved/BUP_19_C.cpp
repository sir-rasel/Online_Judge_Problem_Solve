#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct container{
    ll start;
    ll last;
    int rep;
    string word;
};

int bs(vector<container>segment,ll val){
    int low=0,high=segment.size()-1;
    while(low<=high){
        ll mid = (low+high)/2;
        if(segment[mid].start<=val and segment[mid].last>=val) return mid;
        else if(segment[mid].last<val) low=mid+1;
        else high=mid-1;
    }
}

int main(){
//    freopen("in.txt","r",stdin);
    ll test,cs=1;
    scanf("%lld",&test);
    while(test--){
        string s;
        cin>>s;
        vector<container>segment;
        ll firstIndex=0,lastIndex=0;
        ll r=0;
        string p;
        for(int i=0;i<(int)s.size();i++){ // process the string c into segment
            if(s[i]>='0' and s[i]<='9'){
                r*=10;
                r+=(s[i]-'0');
                if( (i+1<s.size() and (s[i+1]>='a' and s[i+1]<='z') ) or (i+1==s.size()) ){
                    segment.push_back({(ll)firstIndex+1,(ll)(firstIndex+p.size()*r),r,p});
                    firstIndex+=(ll)p.size()*r;
                    p="";
                    lastIndex=firstIndex;
                }
            }
            else if(s[i]>='a' and s[i]<='z'){
                p+=s[i];
                r=0;
            }
        }
        ll n;
        scanf("%lld",&n);
        printf("Case %lld:\n",cs++);
        while(n--){
            ll l,r;
            scanf("%lld %lld",&l,&r);
            if(l>r) swap(l,r);
            if(r>lastIndex) printf("-1\n");
            else{ // print the expected string
                ll ind = bs(segment,l);
                ll li=l-1,i=0;
                bool flag=false;
                while(true){
                    if(li>=(ll)segment[ind].word.size()) li%=(ll)segment[ind].word.size();
                    printf("%c",segment[ind].word[li]);
                    if(l==r){
                        printf("\n");
                        break;
                    }
                    li++;
                    l++;
                    if(l>segment[ind].last){
                        ind++;
                        flag=true;
                    }
                    if(i!=0 and flag==true){
                        if(l==segment[ind].start){
                            li=0;
                            flag=false;
                        }
                    }
                     i++;
                }
            }
        }
    }
    return 0;
}
