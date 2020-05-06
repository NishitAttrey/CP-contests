
1282 A - Temporarily unavailable.cpp GNU C++17 Accepted
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
#define int ll
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int32_t main() {
    fast();
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
	int a,b,c,r;
	cin >> a >> b >> c >> r;
	if(b<a)
		swap(a,b);
	int mi=c-r;
	int ma=c+r;
	// if(b<=ma and a>=mi and a<=ma and b>=mi){
	// // {	cout<<a<<" "<<b<<' '<<mi<<" "<<ma<<edl;
	// 	cout<<0<<edl;
	// }
	// else if(a<=mi and b<=mi){
	// 	cout<<abs(b-a)<<edl;
	// }
	// else if(a>=ma and b>=ma){
	// 	cout<<abs(b-a)<<edl;
	// }
	// else if(a<=mi and b<=ma and b>=mi){
	// 	cout<<abs(mi-a)<<edl;
	// }
	// else if(a<=mi and b>=ma){
	// 	cout<<abs(mi-a)+abs(ma-b)<<edl;
	// }
	// else if(a>=mi and a<=ma and b>=ma){
	// 	cout<<abs(ma-b)<<edl;
	// }
	// else if(b<=mi and a<=ma and a>mi){
	// 	cout<<abs(mi-b)<<edl;
	// }
	// else if(b>=mi and b<=ma and a>=ma){
	// 	cout<<abs(ma-a)<<edl;
	// }
	if(mi>=b or ma<=a){
		cout<<b-a<<edl;
	}
	else
		cout<<abs(a-max(a,mi))+abs(b-min(b,ma))<<edl;


}  
