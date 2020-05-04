
1277 E - Two Fairs.cpp GNU C++17 Accepted
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
#define int ll
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
bool visit[500001];
vector<ll>adj[500001];
int c=0;
void dfs(ll v,int pro){
    visit[v]=true;
    c++;
    for(auto u:adj[v]){
        if(!visit[u] and pro!=u)
            dfs(u,pro);
    }
}  
int32_t main() {
    fast();
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    f(i,1,n+1){
        adj[i].clear();
        visit[i]=0;
    }
    ll i,x,y;
    f(i,0,m){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);  
    }
    c=0;
    dfs(a,b);
    int a1=n-1-c;
    c=0;
    memset(visit,0,sizeof(visit));
    dfs(b,a);
    int b1=n-1-c;
    cout<<a1*b1<<edl;



}  
