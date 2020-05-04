
1245 B - Restricted RPS.cpp GNU C++17 Accepted
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
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
ll modpow(ll x, ll y){
    ll ans=1;
    if(y==1){
        return x%MOD;
    }
    x=x % MOD;
    y=y % (MOD-1);
    while(y){
        if(y & 1){
            ans = (ans*x) %MOD;
        }
        x *= x;
        x = x % MOD;
        y >>= 1;
    }
    return ans;
}

ll modinv(ll x){
    return modpow(x,MOD-2);
}
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt){ 
        ll n;
        cin >> n;
        ll rock,paper,sciss;
        cin >> rock >> paper >>  sciss;
        str s;
        cin >> s;
        ll c=0;
        str s1="";

        f(i,0,n){
            if(s[i]=='R'){
                if(paper>0){
                    s1+='P';
                    paper--;
                    c++;
                }
                else
                    s1+='#';
            }
            if(s[i]=='P'){
                if(sciss>0){
                    s1+='S';
                    sciss--;
                    c++;
                }
                else
                    s1+='#';
            }
            if(s[i]=='S'){
                if(rock>0){
                    s1+='R';
                    rock--;
                    c++;
                }
                else
                   s1+='#';
            }

        }
        if(c>=ceils(n,2)){
            cout<<"YES\n";
            for(auto s:s1){
                if(s=='#'){
                    if(paper>0){
                        cout<<"P";
                        paper--;
                    }
                    else if(rock>0){
                        cout<<"R";
                        rock--;
                    }
                    else if(sciss>0){
                        cout<<"S";
                        sciss--;
                    }

                }
                else
                    cout<<s;
            }

        }
        else
            cout<<"NO";
        cout<<edl;
    }
}  