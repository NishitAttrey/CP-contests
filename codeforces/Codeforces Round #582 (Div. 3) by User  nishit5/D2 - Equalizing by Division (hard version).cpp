
1213 D2 - Equalizing by Division (hard version).cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
vector<ll>adj[300000];
int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  ll n,k;
  cin >> n >> k;
  vec q(n);
  f(i,0,n){
    cin >> q[i];
  }
  f(i,0,n){
  
    for(ll c=0;q[i]!=0;c++){
      adj[q[i]].pb(c);
      q[i]/=2;
  
    }
  }
  f(i,0,300000)
  {
    sort(all(adj[i]));
  }
  ll ma=1e10;
  f(i,0,300000)
  {
    if(adj[i].size()>=k)
    {
        ll var=0;
        f(j,0,k)
        {
            var+=adj[i][j];
        }
        ma=min(ma,var);
    }
  }
  cout << ma;
  
 
  cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 