
1301 C - Ayoub's function.cpp GNU C++17 Accepted
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
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define int ll
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
	int n,m;
	cin >> n >> m;
int tot=n*(n+1)/2;
    int bad_len=n-m;
    m++;
    int bad1=bad_len/m;
    int bad2=bad_len%m;
    int tot_bad=bad2*(bad1+1);
    tot_bad*=(bad1+2);
    tot_bad/=2;
    tot_bad+=((m-bad2)*(bad1*(bad1+1)/2));
    cout<<tot-tot_bad<<endl;
}  
