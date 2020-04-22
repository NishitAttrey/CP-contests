
1237 A - Balanced Rating Changes.cpp GNU C++17 Accepted
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
    vec q(n);
    f(i,0,n){
        cin >> q[i];
    }
    ll c=0,c1=0;
    f(i,0,n){
        if(q[i]%2==0){
            q[i]/=2;
            continue;
        }

        if(q[i]>0 and q[i]%2!=0 and c==0){
            q[i]=(q[i]/2)+1;
            c=1;
            continue;
        }
        if(q[i]>0 and q[i]%2!=0 and c==1){
            q[i]/=2;
            c=0;
            continue;
        }
  
        if(q[i]<0 and q[i]%2!=0 and c1==0){
            q[i]=(q[i]/2)-1;
            c1=1;
            continue;
        }
        if(q[i]<0 and q[i]%2!=0 and c1==1){
            q[i]/=2;
            c1=0;
            continue;
        }
    }
    
    f(i,0,n){
        cout<<q[i]<<edl;
    }


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;

 }