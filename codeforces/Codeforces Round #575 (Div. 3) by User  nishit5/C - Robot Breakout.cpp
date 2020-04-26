
1196 C - Robot Breakout.cpp GNU C++17 Accepted
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
    return 0;
}

void test(){
	int n;
	cin >> n;
	int mini_x = 1e5, max_x = -1e5, mini_y = 1e5, max_y = -1e5;
	f(i,0,n){
	    int x, y, f1, f2, f3, f4;
	    cin >> x >> y >> f1 >> f2 >> f3 >> f4;
	    if(!f1){
	    	max_x = max(max_x, x);
	    }
	    if(!f2){
	    	mini_y = min(mini_y, y);
	    }
	    if(!f3){
	    	mini_x = min(mini_x, x);
	    }
	    if(!f4){
	    	max_y = max(max_y, y);
	    }
	}
	if(mini_x >= max_x and mini_y >= max_y){
		cout << "1 " << mini_x << " " << mini_y << endl;
	}
	else
		cout << 0 << endl;

	

}  
