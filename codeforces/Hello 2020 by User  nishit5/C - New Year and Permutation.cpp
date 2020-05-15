
1284 C - New Year and Permutation.cpp GNU C++17 Accepted
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
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define ceils(s,n) (s+n-1)/n
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

// const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int n,MOD;
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
ll sub(ll x, ll y) {
    x -= y;
    if (x < 0) return x + MOD;
    return x;
}
ll add(ll x, ll y) {
    x += y;
    if (x >= MOD) return x - MOD;
    return x;
}
ll multiply(int a,int b){
    return (a*b)%MOD;
}
ll modinv2(int a){
  int b=MOD,p=1,q=0;
  while(b){
    int c=a/b,d=a;
    a=b;
    b=d%b;
    d=p;
    p=q;
    q=d-c*q;
  }
  return (p+MOD)%MOD;
}
int32_t main() {
    fast();
    // int n;
    // cin >> n;
    // vector<int>q(n);
    // f(i,0,n){
    //   q[i]=i+1;
    // }
    // int t=0;
    // do{
    //   for (int i=0; i <n; i++) 
    //   {  
        
    //     for (int j=i; j<n; j++) 
    //     { 
    //         vec test;

    //         for(int k=i; k<=j; k++) 
    //           test.pb(q[k]);
    //         sort(all(test));
    //         if(test[test.size()-1]-test[0]==test.size()-1){
    //             t++;
    //         }  
  
            
    //     } 
    // } 

    // }
    // while(next_permutation(all(q)));
    // cout<<t;
  
    cin >> n >> MOD;
    vec fact(n+1);
    fact[0]=1;
    f(i,1,n+1){
        fact[i]=multiply(fact[i-1],i);

    }
    int ans=0;
    f(i,0,n){
        ans=add(ans,multiply(n-i,multiply(fact[n-i],fact[i+1])));
    }
    cout<<ans;
    return 0;
}

