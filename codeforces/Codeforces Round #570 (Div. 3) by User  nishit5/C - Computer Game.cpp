
1183 C - Computer Game.cpp GNU C++17 Accepted
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
  
    ll q;
    cin>>q;
    while(q--)
    {
    	ll a,n,x,y;
    	cin>>a>>n>>x>>y;
    	ll x1,y1;
    	 y1=ceil((a-y*n)*1.0/(x-y));
    	 y1--;
    	
    	x1=(n*x-a)/(x-y)+1;
    	if(y1<0||x1>n)
    	{
    		cout<<-1<<edl;
    		
    	}
    	else
    	cout<<min(y1,n)<<edl;
    }	






	
     cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;   	
}
