
1282 C - Petya and Exam.cpp GNU C++17 Accepted
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
	int n,tim,a,b;
	cin >> n >> tim >> a >> b;
	vector<pa>q(n);
	int easy=0,hard=0;
	f(i,0,n){
		cin >> q[i].S;
		if(q[i].S-1<0){
			easy++;
		}
		else
			hard++;
	}
	f(i,0,n){
		cin >> q[i].F;
	}
	int easy1=0,hard1=0,ma=0;
	if(easy*a+hard*b<=tim){
		cout<<n<<edl;
		return;
	}
	sort(q.begin(),q.begin()+n);
	f(i,0,n){
		int val=q[i].F-1;
		if(easy1){
			val-=easy1*a;
		}
		if(hard1){
			val-=hard1*b;
		}
		if(val>=0){
			int a1=min(val/a,easy);
			val-=(a*a1);
			int b1=min(val/b,hard);
			ma=max(a1+b1+easy1+hard1,ma);
		}
		if(q[i].S){
			hard1++;
			hard--;
		}
		else{
			easy1++;
			easy--;
		}

	}
	cout<<ma<<edl;

}  
