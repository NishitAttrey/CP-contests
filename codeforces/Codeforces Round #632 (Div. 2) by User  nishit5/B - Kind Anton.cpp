
1333 B - Kind Anton.cpp GNU C++17 Accepted
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
    vector<int>a(n),b(n);
    int negi = -1,negi1 = -1;
    int posi = -1,posi1 = -1;
    f(i,0,n){
        cin >> a[i];
        if(a[i] < 0){
            negi = 1;
        }  
        if(a[i] > 0){
            posi = 1;
        }
    }
    f(i,0,n){
        cin >> b[i];
        if(b[i] < 0){
            negi1 = 1;
        }
        if(b[i] > 0){
            posi1 = 1;
        }
    }
    // sort(all(a));
    // sort(all(b));
    int pre_p = -1,pre_negi = -1;
    f(i,0,n){
        if(a[i] == b[i]){
            if(a[i] == 1){
                pre_p = 1;
            }
            if(a[i] == -1){
                pre_negi = i;
            }
            continue;
        }
        if(a[i] != b[i]){
            if(a[i] > b[i]){
                if(pre_negi == -1){
                    cout << "NO\n";
                    return ;
                }
                if(a[i] > 0){
                    pre_p = i;
                }
                else if(a[i] < 0){
                    pre_negi = i;
                }
                continue;
            }
            if(a[i] < b[i]){
                if(pre_p == -1){
                    cout << "NO\n";
                    return;
                }
                if(a[i] > 0){
                    pre_p = i;
                }
                else if(a[i] < 0){
                    pre_negi = i;
                }
                continue;
            }
        }
    }
    cout << "YES\n";

    
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
