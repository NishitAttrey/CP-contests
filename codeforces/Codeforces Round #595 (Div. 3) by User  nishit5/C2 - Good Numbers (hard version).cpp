
1249 C2 - Good Numbers (hard version).cpp GNU C++17 Accepted
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
 
void test();
vec re,su;
set<ll>sets;
ll modpow(ll x, ll y){
  ll ans=1;
  if(y==1){
    return x;
  }

  while(y){
    if(y & 1){
      ans = (ans*x);
    }
    x *= x;
  
    y >>= 1;
  }
  return ans;
}

ll modinv(ll x){
  return modpow(x,MOD-2);
}
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
     ll p=1;
    f(i,0,39){
      ll r1=modpow(3,i);
      re.pb(r1);
      sets.add(r1);
    }
    

    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
  ll n;
  cin >> n;
  ll n1=n;
  ll c=0;
  while(n>0){
    n/=3;
    c++;
  }
  ll re=0,p=1;
  f(i,0,c+1){
    
    re+=p; 
    p*=3;
  }
  ll s1=p;
  while(true){
    if(re-p/3>=n1){
        re-=p/3;
    }
        p/=3;
    
    if(p==0){
        break;
    }
 }

   
   if(re<n1){
    cout<<s1<<edl;
   }
   else
        cout<<min(re,s1)<<edl;
  

  



 
}  
