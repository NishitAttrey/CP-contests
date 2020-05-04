
1272 A - Three Friends.cpp GNU C++17 Accepted
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
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int32_t main() {
    fast();
    int t;
    cin >> t;
    while(t--){
         int a,b,c;
        
        cin >> a >> b >> c;
        int a1=abs(a-b)+abs(a-c)+abs(b-c);
        if(a1-4>=0){
            cout<<a1-4<<endl;
            continue;
        }
        else if(a1-2>=0){
            cout<<a1-2<<endl;
            continue;
        }
        else
            cout<<0<<endl;

    }
}  


