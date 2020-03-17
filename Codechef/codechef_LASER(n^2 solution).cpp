#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct Point {
	ll x;
	ll y;
};

bool onSegment(Point p, Point q, Point r) {
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
	return true;

	return false;
}

int orientation(Point p, Point q, Point r) {
	ll val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0;

	return (val > 0)? 1: 2;
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2) {
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);

	if (o1 != o2 && o3 != o4)
		return true;

	if (o1 == 0 && onSegment(p1, p2, q1)) return true;
	if (o2 == 0 && onSegment(p1, q2, q1)) return true;
	if (o3 == 0 && onSegment(p2, p1, q2)) return true;
	if (o4 == 0 && onSegment(p2, q1, q2)) return true;

	return false;
}


int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll n,q;
        scanf("%lld %lld",&n,&q);
        Point arr[n+5];
        for(ll i=0;i<n;i++){
            ll a;
            scanf("%lld",&a);
            arr[i].x = i+1;
            arr[i].y = a;
        }
        while(q--){
            ll x1,x2,y1;
            scanf("%lld %lld %lld",&x1,&x2,&y1);
            int ans = 0;
            for(ll i=0;i<n-1;i++){
                if(arr[i].x == x2 and arr[i].y==y1) continue;
                else if(arr[i+1].x == x1 and arr[i+1].y==y1) continue;
                else if(doIntersect(arr[i],arr[i+1],{x1,y1},{x2,y1})) ans++;
            }
            printf("%d\n",ans);
        }
    }
	return 0;
}
