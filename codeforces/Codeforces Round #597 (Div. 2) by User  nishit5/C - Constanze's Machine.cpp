
1245 C - Constanze's Machine.cpp GNU C++17 Accepted
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
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
int const maxn = 1e5+10;
 
vector<ll>pat;
ll f[maxn];


int main() {
    fast();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    str s; 
    cin >> s;
    if(count(all(s),'w')!=0 ||count(all(s),'m')!=0){
        cout<<0;
        return 0;
    }
    ll n=s.size();
  
    ll ans=1;
    ll c=0,c1=0;
    f(i,0,n) {
        if (s[i]=='n') 
            c++;
        else{ 
            if(c>1)
            pat.pb(c);
            c=0;
        }
        if (s[i]=='u') 
            c1++;
        else{
         if(c1>1)
            pat.pb(c1);
            c1=0;
        }
    }
    //cout<<pat.size();
    if(c>1){
        pat.pb(c);

    }
    if(c1>1){
        pat.pb(c1);
        
    }
    if(pat.size()==0){
        cout<<1;
        return 0;
    }
    f[1] = 1; 
    f[2] = 2;
    sort(all(pat));
    f(i, 3, pat[pat.size()-1]+1) {
        f[i]=(f[i-1]+f[i-2])%MOD;
    }


    f(i,0,pat.size()) {
        ans=(ans*(f[pat[i]]%MOD))%MOD;
        ans%=MOD;
    }
    cout<<ans<<edl;
    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}