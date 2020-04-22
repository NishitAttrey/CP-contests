
1326 C - Permutation Partitions.cpp GNU C++17 Accepted
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

const int MOD = 998244353, N = 5e5 + 10;
const int LINF = LLONG_MAX;
int add(int x, int y) {
    x += y;
    if (x >= MOD) return x - MOD;
    return x;
}
int multiply(int a,int b){
    return (a*b)%MOD;
}

int32_t main() {
    fast();
    int n, k;
    cin >> n >> k;
    vector<int>q(n);
    f(i,0,n){
        cin >> q[i];  
    }
    int s = 0; 
    set<int>sets; 
    for(int i = n; i>n-k;i--){
        s += i;
        sets.insert(i);
    }   
    int c = 1;
    vector<int>pos;
    f(i,0,n){
        if(sets.find(q[i])!=sets.end()){
            f(j,i+1,n){
                if(sets.find(q[j])!=sets.end()){
                    pos.push_back(c);
                    c = 1;
                }
                else{
                    c++;
                }
                // cout  << c << endl;
            }
            break;
        }
    }
    int ans = 1;
    for(auto s: pos){
        // cout << s << endl;
        ans = multiply(ans,s);
    }
    cout << s << " " << ans << endl;


    return 0;
}
 