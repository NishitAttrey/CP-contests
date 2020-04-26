
1199 D - Welfare State.cpp GNU C++17 Accepted
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
ll n;
ll dpp[200001][3];
int main() 
{

    fast();
      
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    
    cin>>n;
    ll q[n+1],qq[n+1];
    f(i,1,n+1)
    {
        cin>>q[i];
        qq[i]=-1;
    }     
    
    ll query;
    cin>>query;
    f(i,0,query)
    {
        ll x;
        cin>>x;
        if(x==1)
        {
            dpp[i][0]=1;
            cin>>dpp[i][1];
            cin>>dpp[i][2];
        }
        else
        {
            dpp[i][0]=2;
            cin>>dpp[i][1];
        }
    } 
    ll mi=0;
    for(ll i=query-1;i>=0;i--)
    {
        if(dpp[i][0]==1)
        {
            if(qq[dpp[i][1]]==-1)
            {
                qq[dpp[i][1]]=max(mi,dpp[i][2]);
            }

        }
        else
            mi=max(mi,dpp[i][1]);
    }
    f(i,1,n+1)
    {
        if(qq[i]==-1)
        {
            qq[i]=max(mi,q[i]);
        }
        cout<<qq[i]<<" ";
    }









  


    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 