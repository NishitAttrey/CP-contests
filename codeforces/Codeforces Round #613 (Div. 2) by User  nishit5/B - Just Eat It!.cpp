
1285 B - Just Eat It!.cpp GNU C++17 Accepted
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
        vec a(n);
        vec b(n),c(n);
        int s=0;
        f(i,0,n){
            cin >> a[i];
            s+=a[i];
        }
        f(i,0,n-1){
            b[i]=a[i];
            c[i]=a[i+1];
        }


  long long max_so_far1 = 0, max_ending_here = 0; 
   for (int i = 0; i < n-1; i++) { 
       max_ending_here = max_ending_here + b[i]; 
       if (max_ending_here < 0) 
           max_ending_here = 0; 
  
       /* Do not compare for all elements. Compare only    
          when  max_ending_here > 0 */
       else if (max_so_far1 < max_ending_here) 
           max_so_far1 = max_ending_here; 
    } 
    long long max_so_far2 = 0;
    max_ending_here = 0; 

    for (int i = 0; i < n-1; i++) { 
       max_ending_here = max_ending_here + c[i]; 
        if (max_ending_here < 0) 
           max_ending_here = 0; 
  
       /* Do not compare for all elements. Compare only    
          when  max_ending_here > 0 */
        else if (max_so_far2 < max_ending_here) 
           max_so_far2 = max_ending_here; 
    }
    max_so_far1=max(max_so_far1,max_so_far2);
    if(s>max_so_far1){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n"; 

}  


