
1293 D - Aroma's Search.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

int32_t main() {
    fast();
    int x1,y1,ax,ay,bx,by,xs,ys,t;
    cin >> x1 >> y1 >> ax >> ay >> bx >> by >> xs >> ys >> t;
    vector<pa>points;
    int x=x1,y=y1;
    while(x<=2e16 and y<=2e16){
        points.pb({x,y});
        x=x*ax+bx;
        y=y*ay+by;
    }
    int ans=0;
    f(i,0,points.size()){
        f(j,i,points.size()){
            int d=points[j].F-points[i].F+points[j].S-points[i].S+min(abs(points[j].F-xs)+abs(points[j].S-ys),abs(points[i].F-xs)+abs(points[i].S-ys));
            if(d<=t){
                ans=max(ans,j-i+1);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
 