
1270 D - Strange Device.cpp GNU C++17 Accepted
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
    int n,k;
    cin >> n >> k;
    map<int,int>maps;
    f(i,1,k+2){
        cout<<"? ";
        f(j,1,k+2){
            if(j!=i){
                cout<<j<<" ";
            }
        }
        cout<<endl;
        int a,b;
        cin >> a >> b;
        maps[b]++;
    }
    int ans=maps.rbegin()->S;
    cout<<"! "<<ans<<endl;
    return 0;
}
 