
1248 B - Grow The Tree.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
	ll n;
	cin >> n;
	vec q(n);
	f(i,0,n){
		cin >> q[i];
	}    
	sort(all(q));
	reverse(all(q));
	ll x=0,y=0;
	ll re=0;
	ll c=0;
	if(n%2!=0){
		c=n/2+1;
	}
	else
	{
		c=n/2;
	}
	f(i,0,c){

		x+=q[i];
	}
	f(i,c,n){
		y+=q[i];
	}
	
	re=(x*x)+(y*y);

	cout<<re;


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 