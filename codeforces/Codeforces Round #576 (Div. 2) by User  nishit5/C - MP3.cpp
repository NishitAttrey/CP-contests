
1199 C - MP3.cpp GNU C++17 Accepted
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
    ll n,bytes;
    cin>>n>>bytes;
    bytes*=8;
    vec q(n);
    set<ll>siz;

    f(i,0,n)
    {
        cin>>q[i];
        siz.add(q[i]);
      

    }
    sort(all(q));
    ll kk=siz.size();
    ll re=n*log2(kk);
    if(re<=bytes)
    {
        cout<<0;
        return 0;
    }
    ll kitna[n];
    ll c=0;
    f(i,0,n)
    {
        kitna[i]=1;
    }
    
    f(i,1,n)
    {
       if(q[i]==q[i-1])
       {
            kitna[c]++;
           
       }
       else
       {
            c++;
       }

    }
   ll s=kitna[0]; 
   f(i,1,c+1)
   {
     s+=kitna[i];
     kitna[i]=kitna[i]+kitna[i-1];

   }  
    
    ll t=pow(2,ceil(bytes/n));
    ll mi=1e13;

 
    

    for(ll i=0;i<=c-t+1;i++)
    {
        ll ans;
        if(i==0)
        {
             ans=s-kitna[t-1];
        }
        else
            ans=s-(kitna[i+t-1]-kitna[i-1]);
      
       mi=min(mi,ans);
   }
   cout<<mi;

   

    


    







  


    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 