
1197 C - Array Splitting.cpp GNU C++17 Accepted
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
  ll n,k;
  
  cin>>n>>k;
  vec q(n);

  f(i,0,n)
  {
    cin>>q[i];
  
  }
  unique_sort(q);
  ll siz=q.size();
  if(siz<=k)
  {
    cout<<0;
    return 0;
  }
  vec diff(q.size()-1,0);

  f(i,1,q.size())
  {
    // cout<<q[i]<<" "<<q[i-1]<<edl;
    diff[i-1]=q[i]-q[i-1];
  }
  sort(all(diff));
  ll s=0;
  for(ll i=0;i<diff.size()-k+1;i++)
  {
    s+=diff[i];
  }
  cout<<s;


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 