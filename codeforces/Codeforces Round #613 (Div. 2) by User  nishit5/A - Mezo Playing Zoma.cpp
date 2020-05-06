
1285 A - Mezo Playing Zoma.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;


 
int32_t main() {
    fast();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c1=0,c2=0;
    f(i,0,n){
    	if(s[i]=='L')
    		c1++;
    	else
    		c2++;
    }
    cout<<c1+c2+1<<endl;
    return 0;
}
 