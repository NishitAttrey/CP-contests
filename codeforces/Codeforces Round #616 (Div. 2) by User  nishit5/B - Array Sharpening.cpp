
1291 B - Array Sharpening.cpp GNU C++17 Accepted
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
#define f(i,x,n) for( i=x;i<n;i++) 
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
    ll tt=1,k;
    cin>>tt;
    f(k,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
    int n;
    cin >> n;
    vec q(n);
    int f=0,p=0;
    int i,j;
    f(i,0,n){
        cin >> q[i];
    }
    if(n==1){
        cout<<"Yes\n";
        return ;
    }
    int c=0;
    f(i,0,n){
        if(q[i]>=c){
            c++;
        }
        else
            break;
    }
    if(i==n){
        cout<<"Yes\n";
        return;
    }
    int c1=0;
    for(j=n-1;j>=0;j--){
        if(q[j]>=c1){
            c1++;
        }
        else
            break;
    }
    if(i-j>1){
        cout<<"Yes\n";
        return;
    }
    if(i-j==1 and q[i]==q[j]){
        cout<<"No\n";
        return;
    }
        cout<<"No\n";
}  
