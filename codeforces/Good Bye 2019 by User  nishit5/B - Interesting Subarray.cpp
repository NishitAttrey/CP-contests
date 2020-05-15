
1270 B - Interesting Subarray.cpp GNU C++17 Accepted
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
    int n;
    cin >> n;
    vec q(n);
    f(i,0,n){
        cin >> q[i];
    }
    int cur,cur1,f=0;
    int a=*max_element(all(q));
    int b=*min_element(all(q));
    if(a-b>=n){
        cout<<"YES\n";
        cout<<1<<" "<<n<<edl;
        return ;
    }
    f(i,1,n){
        if(abs(q[i]-q[i-1])>=2){
            cur=i;
            cur1=i+1;
            f=1;
            break;
        }
    }
    if(f){
        cout<<"yes\n";
        cout<<cur<<" "<<cur1<<edl;
    }
    else
        cout<<"NO\n";

}  
