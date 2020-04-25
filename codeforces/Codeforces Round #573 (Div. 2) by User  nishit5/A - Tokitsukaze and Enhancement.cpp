
1191 A - Tokitsukaze and Enhancement.cpp GNU C++17 Accepted
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
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)


const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() 
{

    fast();
  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
      
    ll a;
    cin>>a;
    ll q=a%4;
    if(q==1)
    {
        cout<<0<<" "<<"A";
    }

    else if(q==3)
    {
        cout<<"2 A";
    } 
    else if(q==2)
    {
        cout<<"1 B";
    }    
    else if(q==0)
    {
        cout<<"1 A";
    }


























  


    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 