
1301 B - Motarack's Birthday.cpp GNU C++17 Accepted
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
    int n;
    cin >> n;
    vector<int>q(n);
    f(i,0,n){
        cin >> q[i];
    }
    vector<int>posi;
    int k=1;
    f(i,0,n){
        if(q[i]==-1){
            if(q[i+1]!=-1 and i+1<n){
                posi.push_back(q[i+1]);
            }
            if(q[i-1]!=-1 and i-1>=0){
                posi.push_back(q[i-1]);
            }
        }

    }
    sort(all(posi));

    if(posi.size()!=0){
        k=(posi[0]+posi[posi.size()-1])/2;
    }  
    // cout<<k<<endl;
    int ans=INT_MIN;
    f(i,0,n){
       if(q[i]==-1){
        q[i]=k;
       }
    }
    f(i,0,n-1){
        ans=max(ans,abs(q[i]-q[i+1]));
    }
    cout<<ans<<" "<<k<<endl;


}  
// 10 10 12 12 
// 1 11
// 35 35 40 
// 5 37
// 3 3 9 9 
// 3 6