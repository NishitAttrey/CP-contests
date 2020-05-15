
1208 C - Magic Grid.cpp GNU C++17 Accepted
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
int a[1001][1001];
int32_t main() {
    fast();
    int n;
    cin >> n;
  
    int k=0;
    f(i,0,n/2){
        f(j,0,n/2){
            a[i][j]=4*k+1;
            a[i][j+n/2]=4*k+2;
            a[i+n/2][j]=4*k+3;
            a[i+n/2][j+n/2]=4*k;
            k++;
        }
    }    
    f(i,0,n){
        f(j,0,n){
            cout<<a[i][j]<<" ";
        }
        cout<<edl;
    }


    return 0;
}
 