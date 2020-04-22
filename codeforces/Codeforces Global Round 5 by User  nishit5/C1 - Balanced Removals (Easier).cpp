
1237 C1 - Balanced Removals (Easier).cpp GNU C++17 Accepted
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
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
/*int t = 0;
 
ordered_set me;
...
me.insert({x, t++});
me.erase(me.lower_bound({x, 0}));
cout << me.order_of_key({x, 0}) << "\n";
*/
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define ceils(s,n) (s+n-1)/n
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin >> n;
    vector<pair<pa,pa>>q(n);
    f(i,0,n){
        ll x,y,z;
        cin >> x >> y >> z;
        q[i].F.F=x;
        q[i].F.S=y;
        q[i].S.F=z;
        q[i].S.S=i+1;
    }
    vector<pa>re;
    sort(all(q));
    map<ll,ll>maps;
    f(i,1,n){
        if(q[i].F.F==q[i-1].F.F and q[i].F.S==q[i-1].F.S and maps[q[i].S.S]==0 and maps[q[i-1].S.S]==0){
           // cout<<q[i].S.S<<" "<<q[i-1].S.S<<edl;
            re.pb({q[i].S.S,q[i-1].S.S});
            maps[q[i].S.S]=1;
            maps[q[i-1].S.S]=1;
        }
    }
   
 
 
      vector<pair<pa,pa>>q1;
    f(i,1,n+1){
        if(maps[q[i-1].S.S]==0){
            q1.pb({{q[i-1].F.F,q[i-1].F.S},{q[i-1].S.F,q[i-1].S.S}});
        }
    }
 
    
    f(i,1,q1.size()){
       if(q1[i].F.F==q1[i-1].F.F and maps[q1[i].S.S]==0 and maps[q1[i-1].S.S]==0){
            //cout<<q1[i].S.S<<" "<<q1[i-1].S.S<<edl;
            re.pb({q1[i].S.S,q1[i-1].S.S});
            maps[q1[i].S.S]=1;
            maps[q1[i-1].S.S]=1;
            i++;
        }
    }
   
    vector<pair<pa,pa>>q2;
    f(i,0,q1.size()){
        if(maps[q1[i].S.S]==0){
            q2.pb({{q1[i].F.F,q1[i].F.S},{q1[i].S.F,q1[i].S.S}});
 
        }
    }
    //  for(auto s:re){
    //     cout<<s.F<<" "<<s.S<<edl;
    // }
   
    f(i,1,q2.size()){
      //if(q1[i].F.F==q1[i-1].F.F and maps[q1[i].S.S]==0 and maps[q1[i-1].S.S]==0){
        // cout<<q2[i].S.S<<" "<<q2[i-1].S.S<<edl;
            re.pb({q2[i].S.S,q2[i-1].S.S});
         
            i++;
       // }
    }
    for(auto s:re){
        cout<<s.F<<" "<<s.S<<edl;
    }
 
 
    
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
 
}
1237 C1 - Balanced Removals (Easier).cpp GNU C++17 Accepted
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
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
/*int t = 0;

ordered_set me;
...
me.insert({x, t++});
me.erase(me.lower_bound({x, 0}));
cout << me.order_of_key({x, 0}) << "\n";
*/
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define ceils(s,n) (s+n-1)/n
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin >> n;
    ll x[n],y[n],z[n];
    f(i,0,n){
        cin >> x[i] >> y[i] >> z[i];
    }
    ll mark[n+1]={0};
    ll xa,xb,xc,ya,yb,yc,za,zb,zc;
    vector<pa>re;
    f(i,0,n){
        if(mark[i]==1){
            continue;
        }
        xa=x[i],ya=y[i],za=z[i];
        ll f1=0;
        f(j,0,n){
            if(mark[j]==1){
                continue;
            }
            xb=x[j],yb=y[j],zb=z[j];            
            if(j==i)
                continue;
            ll f=0;
            f(k,0,n){

                if(k==i or k==j or mark[k]==1)
                    continue;
                else{
                    xc=x[k],yc=y[k],zc=z[k]; 
                    if(min(xa,xb)<=xc and max(xa,xb)>=xc and  min(ya,yb)<=yc and yc<=max(ya,yb) and min(za,zb)<=zc and zc<=max(za,zb))
                    {
                        f=1;
                       break;
                    }
                   
                }
            }
            if(f==0){
                re.pb({i+1,j+1});
                mark[i]=1;
                mark[j]=1;
                f1=1;
            }
            if(f1==1){
                break;
            }
        }
    }
    for(auto s:re){
        cout<<s.F<<" "<<s.S<<edl;
    }

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

