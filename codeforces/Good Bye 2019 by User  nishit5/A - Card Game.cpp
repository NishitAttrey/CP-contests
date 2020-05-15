
1270 A - Card Game.cpp GNU C++17 Accepted

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 5e5 + 10;
const ll LINF = LLONG_MAX;

 
 
int32_t main() {
    fast();
    ll t;
    cin>>t;
    f(i,0,t){ 
        int n,a,b;
        cin >> n >> a >> b;
        vec q1(a),q2(b);
        f(i,0,a){
            cin >> q1[i];
        }
        sort(all(q1));
        f(i,0,b){
            cin >> q2[i];
        }
        sort(all(q2));
        if(q1[q1.size()-1]>q2[q2.size()-1]){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}  
