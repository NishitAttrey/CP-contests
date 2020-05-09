
1300 D - Aerodynamic.cpp GNU C++17 Accepted
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
    int n;
    cin >> n;
    int x[n],y[n];
    f(i,0,n){
        cin >> x[i] >> y[i];
    }
    if(n&1){
        cout<<"NO\n";
        return 0;
    }
    f(i,0,n/2-1){
        if(x[i]+x[i+n/2]!=x[i+1]+x[i+1+n/2] or y[i]+y[i+n/2]!=y[i+1]+y[i+1+n/2]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
 