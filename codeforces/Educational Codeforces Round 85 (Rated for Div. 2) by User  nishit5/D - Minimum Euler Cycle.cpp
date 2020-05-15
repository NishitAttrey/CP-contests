
1334 D - Minimum Euler Cycle.cpp GNU C++17 Accepted
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
    int n,l,r;
    cin >> n >> l >> r;
    int s = 1;
    int req = r - l +1;
    vector<int>result;
    f(i,1,n){
        int tot = (n-i)*2;
        int nxt = i + 1;
        if(s + tot > l){
            for(int j = s;j < s + tot;j++){
                if(j >= l and j <= r){
                    result.push_back(i);
                }
                j++;
                if(j >= l and j <= r){
                    result.push_back(nxt);
                }
                nxt++;
                if(result.size() >= req){
                    for(auto s : result){
                        cout << s << " ";
                    }
                    cout << "\n";
                    return;
                }

            }
        }
        s += tot;
    }
    result.push_back(1);
    for(auto s : result){
        cout << s << " ";
    }
    cout << "\n";
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
