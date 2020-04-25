
1183 A - Nearest Interesting Number.cpp GNU C++17 Accepted
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
    
	ll a;
	cin>>a;
	for(ll i=a; ;i++)
	{
		ll q1=i;
		ll s=0;
		while(q1>0)
		{
			ll re=q1%10;
			s+=re;
			q1/=10;
		}
		if(s%4==0)
		{
			cout<<i;
			return 0;
		}
	}	




















	
     cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;   	
}