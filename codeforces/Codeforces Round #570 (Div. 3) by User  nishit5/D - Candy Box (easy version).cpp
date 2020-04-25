
1183 D - Candy Box (easy version).cpp GNU C++17 Accepted
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
    ll t;
    cin>>t;
    while(t--)
    {
    ll a;
    cin>>a;
    ll q[a+1]={0},x;
    f(i,0,a)
    {
    		cin>>x;
    		q[x]++;

    }
    sort(q+1, q+1+a);
    ll c=0;
	ll re=a+1,x1;
	for (ll i=a; i && re>1; i--)
	{
		 x1=min(q[i], re-1);
		re=x1;
		c+=re;
	}
	cout<<c<<edl;

  

}



	
     cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;   	
}