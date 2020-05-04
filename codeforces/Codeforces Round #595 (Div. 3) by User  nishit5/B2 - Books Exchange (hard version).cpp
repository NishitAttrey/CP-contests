
1249 B2 - Books Exchange (hard version).cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
vector<ll>adj[N];
vec visit(N,false);
ll n;
vec ord;
void bfs(ll v){
    queue<ll>q;
    q.push(v);
    ord.pb(v);
    while(!q.empty()){
        ll a=q.front();
        q.pop();
        visit[a]=true;
        for(auto s:adj[a]){
            if(!visit[s]){
                visit[s]=true;
                ord.pb(s);
                q.push(s);

            }
        }
    }
}
void test();
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){

    cin >> n;
    f(i,1,n+1){
        visit[i]=false;
        adj[i].clear();
    }
    f(i,0,n){
        ll x;
        cin >> x;
        adj[x].pb(i+1);
        adj[i+1].pb(x);
    }
    ll ans[n+1]={0};
    f(i,1,n+1){
        if(!visit[i]){
            ord.clear();
            bfs(i);
            for(auto s:ord){
                ans[s]=ord.size();
            }
        }

    }
    f(i,1,n+1){
        cout<<ans[i]<<" ";
    }
    cout<<edl;


}  

1249 B2 - Books Exchange (hard version).cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
ll parent[N];
ll siz[N];
 
  int find_set(int v) {
      if (v == parent[v])
          return v;
      return parent[v] = find_set(parent[v]);
  }
  void union_sets(int a, int b) {
      a = find_set(a);
      b = find_set(b);
      if (a != b) {
          if (siz[a] < siz[b])
              swap(a, b);
          parent[b] = a;
          siz[a] += siz[b];
      }
  }  
void test();
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
void test(){
 
  ll n;
  cin >> n;
  f(i,1,N){
    parent[i]=i;
    siz[i]=1;
    
  }
  vec q(n+1);
 
  f(i,1,n+1){
    cin >> q[i];
    union_sets(i,q[i]);
    
 
  }
  ll c=0;

  f(i,1,n+1){
    cout<<siz[find_set(i)]<<" ";
  }
  cout<<edl; 
 
}  
1249 B2 - Books Exchange (hard version).cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
ll parent[N];
ll siz[N];
 
  int find_set(int v) {
      if (v == parent[v])
          return v;
      return parent[v] = find_set(parent[v]);
  }
  void union_sets(int a, int b) {
      a = find_set(a);
      b = find_set(b);
      if (a != b) {
          if (siz[a] < siz[b])
              swap(a, b);
          parent[b] = a;
          siz[a] += siz[b];
      }
  }  
void test();
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
void test(){
 
  ll n;
  cin >> n;
  f(i,1,N){
    parent[i]=i;
    siz[i]=1;
    
  }
  vec q(n+1);
 
  f(i,1,n+1){
    cin >> q[i];
    union_sets(i,q[i]);
    
 
  }
  ll c=0;
  f(i,1,n+1){
    cout<<siz[find_set(q[i])]<<" ";
  }
  cout<<edl; 
 
}  
1249 B2 - Books Exchange (hard version).cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;


map<ll,ll>maps;
ll c;
ll parent[N],siz[N],re[N];
void dfstree(ll u,ll p)
{
  c++;
    if(u!=p)
      dfstree(parent[u],p);
    siz[u]=1;
    re[u]=c;


}
 
void test();

int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
 
  ll n;
  cin >> n;
  f(i,1,N){
 
   parent[i]=0;
   siz[i]=0;
    
  }

  ll val[n+1]={0};
  vec q(n+1);
  f(i,1,n+1){
    cin >> q[i];
    if(i==q[i]){
      re[i]=1;
      siz[i]=1;
    }
    else{
        parent[i]=q[i];
    } 
  }
  f(i,1,n+1){
    c=0;
    if(!siz[i]){
      dfstree(parent[i],i);
    }
  }
  f(i,1,n+1){
    cout<<re[i]<<" ";
  }
  cout<<edl;




}  
