
1234 B2 - Social Network (hard version).cpp GNU C++17 Accepted
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
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
     ll n,k;
    cin>>n>>k;
    ll a[n+1];
    f(i,1,n+1){
        cin>>a[i];
    }
    deque<ll>v;
    map<ll,ll>maps;
    f(i,1,n+1){
        // if(v.size()<k){
            if(maps[a[i]]==0){
                v.push_front(a[i]);
                maps[a[i]]=1;
            }
        
        if(v.size()>k)
        {
            maps[v[v.size()-1]]=0;
            v.pop_back();
        }
    }
    cout<<v.size()<<edl;
    // f(i,0,v.size()){
    //     cout<<v[i]<<" ";
    // }
    for(auto s:v)
    {
        cout<<s<<" ";
    }
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
1234 B2 - Social Network (hard version).cpp GNU C++17 Accepted
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
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif

    ll n,k;
    cin>>n>>k;
    map<ll,ll> maps;
    deque<ll> l;
    f(i,0,n)
    {
        ll x;
        cin>>x;
        if(!maps.count(x))
        {   
            maps[x]=1;
            l.pb(x);
        }
        if(l.size()>k)
        {
            maps.erase(l.front());
            l.pop_front();
        }
    }
    vec v;
    for(auto u:l)
        v.pb(u);
    ll w=0;
    if(v.size()<k)
        cout<<v.size()<<edl;
    else
        cout<<k<<edl;
    for(ll i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
        w++;
        if(w==k)
            break;
    }



    return 0;
}