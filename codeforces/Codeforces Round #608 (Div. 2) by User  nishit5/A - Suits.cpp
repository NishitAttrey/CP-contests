
1271 A - Suits.cpp GNU C++17 Accepted
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
    int ties,scar,vest,jack,c1,c2;
    cin  >> ties >> scar >> vest >> jack >> c1 >> c2;
    int su1=min({scar,vest,jack});
    int su2=min(ties,jack);
    int a1=su1*c2;
    int a2=jack-su1;
    if(a2>0){
        a1+=min(a2,su2)*c1;
    }
    int b1=su2*c1;
    int b2=jack-su2;
   // cout<<a2<<" "<<b2<<edl;
    if(b2>0){
        b1+=min(b2,su1)*c2;
    }
    cout<<max(b1,a1);
    return 0;
}
 