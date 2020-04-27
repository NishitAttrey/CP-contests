
1214 C - Bad Sequence.cpp GNU C++17 Accepted
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
int main() 
{

  ll n;
  cin>>n;
  str s;
  cin>>s;
  ll c1=0,c2=0,f=0;
  f(i,0,n)
  {
  	if(s[i]=='(')
  	{
  		c1++;
  	}
  	if(s[i]==')')
  	{
  		c2++;
  	}
  	if(s[i]==')'&&c1<c2-1)
  	{
  		f=1;
  		break;
  	}

  }
  if(c1!=c2||f==1)
  {
  	cout<<"No";
  	return 0;
  }
  cout<<"Yes";
 

 
  cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 