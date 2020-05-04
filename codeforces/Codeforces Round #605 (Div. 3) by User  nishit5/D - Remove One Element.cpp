
1272 D - Remove One Element.cpp GNU C++17 Accepted
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
int forw[N],backw[N],q[N],n;
int32_t main() {
    fast();
    cin >> n;
    f(i,1,n+1){
        cin >> q[i];
    }
    int ans=0;
    f(i,1,n+1){
        if(q[i]>q[i-1]){
            forw[i]=forw[i-1]+1;
        }
        else{
            forw[i]=1;
        }
        ans=max(ans,forw[i]);
    }
    for(int i=n;i>=1;i--){
        if(q[i]<q[i+1]){
            backw[i]=backw[i+1]+1;
        }
        else{
            backw[i]=1;
        }
     }
     f(i,1,n+1){
        if(q[i+1]-q[i-1]>=1){
            ans=max(ans,forw[i-1]+backw[i+1]);
        }
        
    }
    cout<<ans<<edl;

    return 0;
}

 
1272 D - Remove One Element.cpp GNU C++17 Accepted
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
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int32_t main() {
    fast();
    int n;
    cin >> n;
    vec q(n);
    f(i,0,n){
        cin >> q[i];
    }
    vec re;
    int c=1,ans=-1;
    vec pos;
    f(i,1,n){
        if(q[i]>q[i-1]){
            c++;
        }
        else{
            ans=max(ans,c);
            re.pb(c);
            c=1;
            if(i+1<n and q[i+1]>q[i-1]){
                pos.pb(1);
            }
            else if(i-2>=0 and q[i]>q[i-2]){
                pos.pb(1);
            }
            else
                pos.pb(0);
        }
    }
    re.pb(c);
    ans=max(c,ans);
    
    n=re.size()-1;
    // for(auto s:re){
    //     cout<<s<<" ";
    // }
    // cout<<edl;
    // for(auto s:pos){
    //     cout<<s<<' ';
    // }
    // cout<<edl;
    f(i,0,n){
        if(i<n and pos[i])
            ans=max(ans,re[i]+re[i+1]-1);
    }   
    cout<<ans<<edl;




}  


