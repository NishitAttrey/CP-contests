
1300 C - Anu Has a Function.cpp GNU C++17 Accepted
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
    vector<int>q(n);
    int bits[32]={0};
    f(i,0,n){
        cin >> q[i]; 
        f(j,0,32){
            if(q[i]&(1<<j)){
                bits[j]++;
            }    
        }     
    }
    int ma=-1,ind;
    f(i,0,n){
        int v=0;
        f(j,0,32){
            if(q[i]&(1<<j)){
                if(bits[j]==1){
                    v+=(1<<j);
                }
            }     
        } 
        if(v>=ma){
            ind=i;
            ma=v;
        }     
    }
    cout<<q[ind]<<" ";
    f(i,0,n){
        if(ind!=i){
            cout<<q[i]<<" ";
        }      
    }

    return 0;
}
 