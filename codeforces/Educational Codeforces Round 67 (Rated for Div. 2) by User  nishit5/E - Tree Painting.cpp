
1187 E - Tree Painting.cpp GNU C++17 Accepted
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
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resiz(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;


vec dp(500001,0);
vec siz(500001,0);
vec adj[500001];

ll ans;
int dfstree1(int v,int pre=-1)
{
	siz[v]=1;

	for(auto to :adj[v])
	{
		if(to!=pre)
			siz[v]+=dfstree1(to,v);
	}
	return siz[v];
}




ll dfstree2(ll v,ll pre=-1)
{

	dp[v]=siz[v];
	for(auto to :adj[v])
	{
		if(to==pre)
			continue;
		dp[v]+=dfstree2(to,v);
	}
	return dp[v];
}


void dfstree3(ll v,ll pre=-1)
{
	ans=max(ans,dp[v]);
	for(auto to :adj[v])
	{
		if(to==pre)
			continue;
		
		dp[v]-=dp[to];
		dp[v]-=siz[to];
		siz[v]-=siz[to];
		dp[to]+=dp[v];
		dp[to]+=siz[v];
		siz[to]+=siz[v];
		dfstree3(to,v);
		dp[to]-=dp[v];
		dp[to]-=siz[v];
		siz[to]-=siz[v];
		siz[v]+=siz[to];
		dp[v]+=siz[to];
		dp[v]+=dp[to];
	

	}

}


int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif

  ll n;
  cin>>n;
  ll i,x,y;

  f(i,0,n-1)
  {
  		ll x, y;
		cin>>x>>y;
		--x;
		--y;
		adj[x].push_back(y);
		adj[y].push_back(x);
  }
  ans=0;
 



  dfstree1(0);
  dfstree2(0);
  dfstree3(0);
  cout<<ans;
  


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 