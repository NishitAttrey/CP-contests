
1327 C - Game with Chips.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const int LINF = LLONG_MAX;
 
void test(){
    int n,m,k;
    cin >> n >> m >> k;
    int ans = 0;
    string s ="";
    int x1[k],y1[k],x2[k],y2[k];
    f(i,0,k){
        cin >> x1[i] >> y1[i];       
    }
    f(i,0,k){
        cin >> x2[i] >> y2[i];
    }
    f(i,0,m-1){
        s+='R';
        ans++;
    }
    f(i,0,n-1){
        s+='D';
        ans++;
    }
    f(i,0,n){
        if(i%2==0){
            f(j,0,m-1){
                s+='L';
                ans++;
            }
            if(i<n-1){
                s+='U';
                ans++;
            }
        }
        else{
            f(j,0,m-1){
                s+='R';
                ans++;
            }
            if(i<n-1){
                s+='U';
                ans++;
            }
        }
    } 
    assert(ans <=2*n*m);
    cout << ans << "\n" << s << endl;  
    
      
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    // cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
