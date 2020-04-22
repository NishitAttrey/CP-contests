
1178 A - Prime Minister.cpp GNU C++17 Accepted
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
 
 
 
 
int main() 
{
 
 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  ll n;
  cin>>n;
  vec q(n);
  ll s=0;
  f(i,0,n)
  {
    cin>>q[i];
    s+=q[i];
  }
  if(q[0]>(s/2))
  {
    cout<<1<<edl<<1;
    return 0;
  }
  vec re;
  ll s1=0;
  re.pb(1);
  f(i,1,n)
  {
    if(q[0]>=2*q[i])
    {
      re.pb(i+1);
      s1+=q[i];
 
    }
  }
  s1+=q[0];
  if(s1>s/2)
  {
    cout<<re.size()<<edl;
    for(auto s:re)
    {
      cout<<s<<" ";
    }
  }
  else
    cout<<0;
 
  
 
 
    
 
 
 
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}