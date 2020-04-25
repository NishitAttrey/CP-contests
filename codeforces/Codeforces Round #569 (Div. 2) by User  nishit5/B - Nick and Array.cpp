
1180 B - Nick and Array.cpp GNU C++17 Accepted
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
  
    ll n,i,nz=0;
    cin>>n;
    ll a[n];
    ll b[n];
    f(i,0,n)
    {
		cin>>a[i];
		b[i]=a[i];
	}
    f(i,0,n)
    {
    	ll x=-a[i]-1;
    	if(abs(x)>abs(a[i]))
    	{
    		a[i]=-a[i]-1;
    		if(a[i]<0)
    			nz++;
    		b[i]=a[i];
		}
		else if(a[i]<0)
			nz++;
	}
	if(nz%2==0)
	{
		f(i,0,n)
			cout<<a[i]<<" ";
	}
	else
	{
		sort(a,a+n);
		if(a[0]<0 && a[n-1]<0)
		{
				f(i,0,n)
				{
					if(a[0]==b[i])
					{
						b[i]=-b[i]-1;
						break;
					}
				}
		}
		else
		{
				f(i,0,n)
				{
					if(a[n-1]==b[i])
					{
						b[i]=-b[i]-1;
						break;
					}
				}
		}
		f(i,0,n)
			cout<<b[i]<<" ";
	}
 
     cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;   	
}
1180 B - Nick and Array.cpp GNU C++17 Accepted
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
  
    ll n,i,nz=0;
    cin>>n;
    ll a[n];
    ll b[n];
    f(i,0,n)
    {
		cin>>a[i];
		b[i]=a[i];
	}
    f(i,0,n)
    {
    	ll x=-a[i]-1;
    	if(abs(x)>abs(a[i]) && x!=0 || a[i]==0)
    	{
    		a[i]=-a[i]-1;
    		if(a[i]<0)
    			nz++;
    		b[i]=a[i];
		}
		else if(a[i]<0)
			nz++;
	}
	if(nz%2==0)
	{
		f(i,0,n)
			cout<<a[i]<<" ";
	}
	else
	{
		sort(a,a+n);
		if(a[0]<0 && a[n-1]<0)
		{
				f(i,0,n)
				{
					if(a[0]==b[i])
					{
						b[i]=-b[i]-1;
						break;
					}
				}
		}
		else
		{
				f(i,0,n)
				{
					if(a[n-1]==b[i])
					{
						b[i]=-b[i]-1;
						break;
					}
				}
		}
		f(i,0,n)
			cout<<b[i]<<" ";
	}
 
     cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;   	
}