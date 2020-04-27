
1204 C - Anna, Svyatoslav and Maps.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;
 
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
ll dist[101][101];
char ch[101][101];
int main() 
{
 
    fast();
      
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    
    f(i,0,n)
    {
      f(j,0,n)
      {
        cin>>ch[i][j];
    
      }
    }  
    ll m;
    cin>>m;
 
    vec p(m+10);
    f(i,0,m)
    {
      cin>>p[i];
      p[i]--;
    }
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) 
          dist[i][j] = 0;
        else if (ch[i][j]=='1') 
          dist[i][j] = 1;
        else 
          dist[i][j] = INF;
      }
    }
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    vec ans;
    ans.pb(p[0]);
    ll prev = p[0];
    ll tmp = 1;
    ll  i = 1;
    while(i<m){
      while(dist[prev][p[i]] == tmp and i<m){
         tmp++;i++;
      }
      tmp = 1;
      ans.pb(p[i-1]);
      prev = p[i-1];
      if(i==m) break;
   }
   cout<<ans.size()<<edl;
   for(auto e : ans){
      cout<<e+1<<" ";
   } 
 
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}