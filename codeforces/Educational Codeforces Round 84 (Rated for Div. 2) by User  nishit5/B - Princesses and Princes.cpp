
1327 B - Princesses and Princes.cpp GNU C++17 Accepted
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
    int n;
    cin >> n;
    vector<int>visit(n+1,0),mark(n+1,0);
    vector<int>adj[n+1];
    int x;
    f(i,0,n){
        cin >> x;
        f(j,0,x){
            int val;
            cin >> val;
            adj[i].push_back(val);
        }
    }
    f(i,0,n){
        int f = 0;
        for(auto s:adj[i]){
            if(!visit[s]){
                visit[s] = 1;
                f = 1;
                break;
            }
        }
        if(f){
            mark[i] = 1;
        }
    }
    int r1,r2;
    r1 = -1;
    r2 = -1;
    f(i,0,n){
        if(mark[i] == 0){
            r2 = i;
        }
    }
    f(i,1,n+1){
        if(visit[i] == 0){
            r1 = i;
        }
    }
    if(r1 != -1 and r2 !=-1){
        cout << "IMPROVE\n";
        cout << r2+1 << " " << r1 << endl;
        return ;
    }
    cout << "OPTIMAL\n";
    
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
