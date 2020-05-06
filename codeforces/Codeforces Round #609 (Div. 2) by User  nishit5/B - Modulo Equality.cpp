
1269 B - Modulo Equality.cpp GNU C++17 Accepted
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
	int n,m;
	cin >> n >> m;
	vec a(n),b(n);
	int s1=0,s2=0;
	f(i,0,n){
		cin >> a[i];
		s1+=a[i];
	}
	f(i,0,n){
		cin >> b[i];
		s2+=b[i];
	}
	sort(all(a));
	sort(all(b));
	int f=0;
	int ind=0;

	f(i,0,n){
		if(a[i]!=b[i]){
			f=1;
			ind=i;
			break;
		}
	}
	if(f==0){
		cout<<0<<edl;
		return 0;
	}
	int ans=1e10;
	f(i,0,n){
		vec q;
		int x1=0,x=0;
		int re=b[n-1]-a[i];
		while(re+x1*m<0)
			x1++;
		x=x1*m+re;
		f(j,0,n){
			q.pb((a[j]+x)%m);
		}
		sort(all(q));
		if(q==b){
			ans=min(ans,x);
		}

	}
	cout<<ans;
    return 0;
}
 