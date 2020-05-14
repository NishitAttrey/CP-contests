
1238 D - AB-string.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin >> n;
    str s;
    cin >> s;
    ll ans=n*(n-1)/2;
    
        ll c=1;
        f(i,1,n){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                ans-=c;
                c=1;
            }
        }
      

        reverse(all(s));
        str s1=s;
        c=1;
        f(i,1,n){
            if(s1[i]==s1[i-1]){
                c++;
            }
            else{
                ans-=c-1;
                c=1;
            } 
        }        

       
    cout<<ans;
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
} 