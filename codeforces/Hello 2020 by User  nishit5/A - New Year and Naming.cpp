
1284 A - New Year and Naming.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;

#define pb push_back
#define F  first
#define S  second
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const ll LINF = LLONG_MAX;

int32_t main() {
    fast();
    int n,m;
    cin >> n >> m;
    str s[n];
    f(i,0,n){
        cin >> s[i];
    }
    str s2[n*m];
    f(i,0,m){
        cin >> s2[i];
    }
    f(i,m,n*m){
        s2[i]=s2[i-m];
    }
    int tot=n*m;
    vector<str>re;
    f(i,0,n*m){
        str ss=s[i%n]+s2[i];
        re.pb(ss);
        // cout<<ss<<edl;
    }
    int q;
    cin >> q;
    f(i,0,q){
        int x;
        cin >> x;
        x--;
        cout<<re[x%(n*m)]<<endl;
    }


    return 0;
}
 