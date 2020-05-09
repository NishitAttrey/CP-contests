
1300 E - Water Balance.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
// #define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 1e6 + 10;
const int LINF = LLONG_MAX;

double a[N],sum[N];
int idx[N];
int main() {
    fast();
    int n;
    cin >> n;
    f(i,1,n+1){
        int val;
        cin >> val;
        // cout<<val<<" ";
        a[i]=val;
        sum[i]+=sum[i-1]+val;  
    }
    a[n+1]=100000000;
    idx[n]=n+1;
    for(int i=n-1;i>0;i--){
        int id=i+1;
        while(a[id]<=a[i]){
            id=idx[id];
            a[i]=(sum[id-1]-sum[i-1])/(id-i);
        }
        idx[i]=id;
    }
    int i;
    for(i=1;i<=n;){
        int bgn=i;
        int end=idx[i];
        for(;i<end;i++){
            printf("%.9f\n",a[bgn]);
        }
    }


    return 0;
}
 