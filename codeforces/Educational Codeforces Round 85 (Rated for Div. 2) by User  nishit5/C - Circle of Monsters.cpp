
1334 C - Circle of Monsters.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const int LINF = LLONG_MAX;
 
void test(){
    int n;
    cin >> n;
    vector<array<int,2>>q(n);
    f(i,0,n){
    	cin >> q[i][0] >> q[i][1];
    }
    int ans = 1e18,s = 0;
    int po = 0;
    f(i,0,n){
        s += max(0ll,q[(i+1)%n][0] - q[i][1]); 
    }
    f(i,0,n){
        po = max(0ll,q[i][0] - q[i][1]);
        int req = s - po + q[i][0];
        ans = min(ans,req);
    }

    cout << ans << endl;
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
