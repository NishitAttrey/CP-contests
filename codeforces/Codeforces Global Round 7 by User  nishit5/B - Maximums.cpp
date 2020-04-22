
1326 B - Maximums.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

int32_t main() {
    fast();
    int n;
    cin >> n;
    vector<int>b(n);
    f(i,0,n){
        cin >> b[i];  
    }
    int pre = 0, s = 0;
    f(i,0,n){
        if(i == 0){
            cout << max(b[i], 0ll) << " ";
        }
        else{
            pre = max(pre,b[i-1] + pre);
            cout << b[i] + pre << " ";
        }
    }
    
    
    return 0;
}
 