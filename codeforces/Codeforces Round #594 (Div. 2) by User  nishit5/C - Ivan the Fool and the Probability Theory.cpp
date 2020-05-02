
1248 C - Ivan the Fool and the Probability Theory.cpp GNU C++17 Accepted
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
ll modpow(ll x, ll y){
	ll ans=1;
	if(y==1){
		return x%MOD;
	}
	x=x % MOD;
	y=y % (MOD-1);
	while(y){
		if(y & 1){
			ans = (ans*x) %MOD;
		}
		x *= x;
		x = x % MOD;
		y >>= 1;
	}
	return ans;
}

ll modinv(ll x){
	return modpow(x,MOD-2);
}
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
   ll n,m;
   cin >> n >> m;
   ll n1=max(n,m);
   vec a(n1+1,0);
   a[0] = 0;
   a[1] = 1;
   a[2] = 2;
   f(i,3,n1+1){
      a[i] = a[i-1]+a[i-2];
      a[i] = a[i]%MOD;
   }
   ll ans=((a[m]+a[n]-1)*2)%MOD;
   cout<<ans<<edl;
   return 0;
}