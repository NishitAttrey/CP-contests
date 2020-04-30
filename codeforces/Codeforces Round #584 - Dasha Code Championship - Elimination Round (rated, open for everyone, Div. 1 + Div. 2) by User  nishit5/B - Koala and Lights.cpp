
1209 B - Koala and Lights.cpp GNU C++17 Accepted
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

  fast();
  
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
  	ll n;
  	cin >> n;
  	str s;
  	cin >> s;
  	vector<pa>q(n);
  	f(i,0,n)
  	{
  		cin >> q[i].F >> q[i].S;
  	}    
  	ll ma=0;
  	f(i,0,n)
  	{
  		if(s[i]=='1')
  			ma++;
  	}
  	if(ma==n)
  	{
  		cout<<ma;
  		return 0;
	}
	ll arr[2000];
	memset(arr,0,sizeof(arr));
	ll pos;
    f(i,0,n)
    {
     ll ans = 0,k=1;
   
    if(s[i] == '1')
    {
        arr[0]++;
        pos = 1;
    }
    else
    {
        pos = 0;
    }
    for(k;k<1000;k++)
    {
        if(k == q[i].S + ans)
        {
            if(pos == 0)
            {
                pos = 1;
            }
            else
            {
                pos = 0;
            }
            ans += q[i].F;
        }
        if(pos == 1)
        arr[k]++;
      
    }
  }
  sort(arr, arr + 1000);
  cout << arr[999];


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 