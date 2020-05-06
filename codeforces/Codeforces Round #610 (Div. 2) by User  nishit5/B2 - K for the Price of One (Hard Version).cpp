
1282 B2 - K for the Price of One (Hard Version).cpp GNU C++17 Accepted
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
    int n,p,k;
    cin >> n >> p >> k;
    vec q(n);
    int ans=0;
    f(i,0,n){
        cin >> q[i];
    }
    sort(all(q));
    int ma=0;
    int pre_sum[n]={0};
    if(p<q[0]){
        cout<<0<<edl;
        return ;
    }
    for(int i=0;i<k-1;i++){
        if(i==0){
            pre_sum[i]=q[i];
        }
        else
            pre_sum[i]=pre_sum[i-1]+q[i];
    }
    pre_sum[k-1]=q[k-1];
    f(i,k,n){
        pre_sum[i]=pre_sum[i-k]+q[i];
    }
    int c=0,ek=0;
    if(p>=pre_sum[n-1]){
        cout<<n<<edl;
        return ;
    }
    f(i,0,n){
        if(p<pre_sum[i]){
            if(ek==0){
                ans=i;
                ek=1;
            }
        }
        else{
            ans=i+1;
        }
        


    }
    if(ek){
        cout<<ans<<edl;
    }

}  
