
1243 D - 0-1 MST.cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define ceils(s,n) (s+n-1)/n
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
set<ll>not_visit;
set<ll>adj[N];
ll n,m;
void dfs(ll v){

    vec q;
    not_visit.erase(v);
    for(auto s:not_visit){
        if(adj[v].find(s)==adj[v].end()){
            q.pb(s);
        }
    }
    for(auto s:q){
        not_visit.erase(s);
    }
    for(auto s:q){
        dfs(s);
    }

}
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
     
    cin>>n>>m;
    
    ll i,x,y;
    f(i,0,m)
    {
     cin>>x>>y;
     adj[x].add(y);
     adj[y].add(x);  

    }
    f(i,1,n+1){
        not_visit.add(i);
    }
    ll ans=0;
    f(i,1,n+1){
        if(not_visit.find(i)!=not_visit.end()){
          
            dfs(i);
            ans++;
         
        }
    }
    cout<<ans-1;
 
    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
1243 D - 0-1 MST.cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define ceils(s,n) (s+n-1)/n
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
set<ll>not_visit;
set<ll>adj[N];
ll n,m,sz;
void dfs(ll v){
    sz++;
    vec q;
    not_visit.erase(v);
    for(auto s:not_visit){
        if(adj[v].find(s)==adj[v].end()){
            q.pb(s);
        }
    }
    for(auto s:q){
        not_visit.erase(s);
    }
    for(auto s:q){
        dfs(s);
    }

}
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
     
    cin>>n>>m;
    
    ll i,x,y;
    f(i,0,m)
    {
     cin>>x>>y;
     adj[x].add(y);
     adj[y].add(x);  

    }
    f(i,1,n+1){
        not_visit.add(i);
    }
    ll ans=0;
    f(i,1,n+1){
        if(not_visit.find(i)!=not_visit.end()){
            sz=0;
            dfs(i);
            ans++;
         
        }
    }
    cout<<ans-1;
 
    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}