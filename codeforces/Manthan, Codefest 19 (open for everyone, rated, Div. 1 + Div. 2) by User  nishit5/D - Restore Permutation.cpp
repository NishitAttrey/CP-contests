
1208 D - Restore Permutation.cpp GNU C++17 Accepted
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

const int MOD = 1e9 + 7, N = 2e5 + 10;
const int LINF = LLONG_MAX;
int bit[N], ans[N];
int n;
void update(int id, int val){
    while(id < N-1){
        bit[id] += val;
        id += (id&-id);
    }
}
int query(int id){
    int ans = 0;
    if(id == 0){
        return 0;
    }
    while(id > 0){
        ans += bit[id];
        id -= id&-id;
    }
    return ans;
}
int32_t main() {
    fast();
    int n;
    cin >> n;
    vector<int> q(n+1);
    f(i,0,n){
        cin >> q[i];
        update(i+1, i+1);
    }
    for(int i = n - 1; i >= 0; i--){
        int low = 1, high = n+1;
        for(int j = 0;j<50;j++){
            int mid  = (low + high + 1)/2;
            if(query(mid-1) <= q[i]){
                low = mid;
            }
            else{
                high = mid - 1;
            }
        }
        update(low, -low);
        ans[i] = low;
    }
    f(i,0,n){
        cout << ans[i] << " ";
    }
    return 0;
}
 