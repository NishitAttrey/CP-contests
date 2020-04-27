
1214 A - Optimal Currency Exchange.cpp GNU C++17 Accepted
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
    ll n,a,b;
    cin >> n>> a >> b;
    ll ans=INF;
    b*=5;
    for(ll i = 0;i*b<=n;i++)
    {
        ans=min(ans,(n-b*i)%a);
    }
    cout << ans;

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

1214 A - Optimal Currency Exchange.cpp GNU C++17 Accepted
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
	ll n,e,d;
	cin>>n>>d>>e;
	// set<ll>set1,set2;
	// set1.add(1);
	// set1.add(2);
	// set1.add(10);
	// set1.add(20);
	// set1.add(50);
	// set1.add(100);
	// set2.add(5);
	// set2.add(10);
	// set2.add(20);
	// set2.add(50);
	// set2.add(200);
	// set2.add(100);

	// ll doll[7]={ 1, 2, 5, 10, 20, 50,100};
	// ll euro[6]={5 , 10, 20, 50, 100, 200 };
	// ll r1=0,r2=0,n1=n,n2=n;
	// ll n22=1e10,n33=1e10;
	ll re=1e10;
	ll q=0,c;
	while(q*e<=n)
	{
		c=n-q*e;
		re=min(re,c-(c/d)*d);
		q+=5;
	}
	cout<<re;




	

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 