
1271 C - Shawarma Tent.cpp GNU C++17 Accepted
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
    int n,x,y;
    cin >> n >> x >> y;
    vector<pa>q1,q2,q3,q4;
    f(i,0,n){
        int a,b;
        cin >> a >> b;
        if(a>x){
            q1.pb({a,b});
        }
        if(b>y){
            q2.pb({a,b});
        }
        if(a<x){
            q3.pb({a,b});
        }
        if(b<y){
            q4.pb({a,b});
        }
    }
    int re=max({q1.size(),q2.size(),q3.size(),q4.size()});
    cout<<re<<edl;
    if(re==q1.size()){
        cout<<x+1<<" "<<y<<edl;
    }
    else if(re==q2.size()){
        cout<<x<<" "<<y+1<<edl;
    }
    else if(re==q3.size()){
        cout<<x-1<<" "<<y<<edl;
    }
    else
        cout<<x<<" "<<y-1<<edl;
    return 0;
}
 