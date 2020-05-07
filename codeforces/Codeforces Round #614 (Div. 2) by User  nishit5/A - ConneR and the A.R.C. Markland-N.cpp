
1293 A - ConneR and the A.R.C. Markland-N.cpp GNU C++17 Accepted
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
	int n,r,k;
	cin >> n >> r >> k;
	vec q(k);
	map<int,int>maps;
	int x;
	f(i,0,k){
		cin >> x;
		q[i]=k;
		maps[x]=1;
	}
	sort(all(q));
	if(maps[r]==0){
		cout<<0<<edl;
		return ;
	}
	int ans1=0,ans2=0;
	int r1=r;
	while(maps[r1]!=0 and r1<=n){
		r1++;
		ans1++;
	}
	if(r1==n+1){
	     ans1=1e11;
	}
	int r2=r;
	while(maps[r2]!=0 and r2>=1){
		r2--;
		ans2++;
	}
	if(r2==0){
		ans2=1e11;
	}
	cout<<min(ans1,ans2)<<edl;
	

}  
