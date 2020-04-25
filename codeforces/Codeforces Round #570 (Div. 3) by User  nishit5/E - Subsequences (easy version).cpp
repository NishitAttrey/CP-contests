
1183 E - Subsequences (easy version).cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
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
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;

//REFERENCE:https://www.geeksforgeeks.org/count-unique-subsequences-of-length-k/

ll solve(ll k,string s){
    if(k==0) return 1;
    if(k==(int)s.size()){
        return 1;
    }
    int n = s.size();
    if(k==1){
        set<ll> in;
        f(i,0,n){
            in.insert(s[i]-'a');
        }
        return in.size();
    }

    vector<ll> v1(n,0),v2(n,0),v3(26,0);
    v2[n-1] = 1;
    v3[s[n-1]-'a'] = 1;
    for(ll i=n-2;i>=0;i--){
        v2[i] = v2[i+1];
        if(v3[s[i]-'a']==0){
            v2[i]++;
            v3[s[i]-'a'] = 1;
        }
    }

    f(j,1,k){
        fill(all(v3),0);
        v1[n-1] = 0;
        for(ll i=n-2;i>=0;i--){
            v1[i] = v1[i+1];
            v1[i] = v1[i]+v2[i+1];
            v1[i] = v1[i]-v3[s[i]-'a'];
            v3[s[i]-'a'] = v2[i+1];
        }
        v2 = v1;
    }
    return v1[0];
}
int main()
{
    
     fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  

    ll n,k;
    str s;
    cin>>n>>k;
    cin>>s;

    ll req = 0,ans = 0;
    for(ll i=n;i>=0;i--){
        ll kk = solve(i,s);
         if (kk >= k) {
            ans += k* (n - i);
            break;
        } else {
            ans += kk * (n - i);
            k -= kk;
        }

        if (i == 0) {
            cout << -1 << endl; 
            return 0;
        }

    }
    cout<<ans<<edl;
  

    return 0;
}
