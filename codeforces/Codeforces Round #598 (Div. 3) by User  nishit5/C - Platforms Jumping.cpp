
1256 C - Platforms Jumping.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll n,m,d;
    cin >> n >> m >> d;
    vec q(m+1),re(n+1,0);
    ll s=0;
    f(i,1,m+1){
        cin >> q[i];
        s+=q[i];
    }
    ll remains=n-s;
    ll pos=0;
    ll c=1;
    while(pos<=n){
        ll j=min(remains+1,d);
        pos+=j;
        remains-=(j-1);
        f(i,0,q[c]){
            re[pos+i]=c;
        }
        pos+=q[c]-1;
        ++c;
        if(c==m+1){
            if(pos+d>n){
                break;
            }
            else{
                cout<<"no\n";
                return 0;
            }
        }
        
    }
    cout<<"yes\n";
    for (int i = 1; i <= n; ++i)
    {
        /* code */
        cout<<re[i]<<" \n"[i==n];
    }

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
1256 C - Platforms Jumping.cpp GNU C++17 Accepted
#include<bits/stdc++.h>
using namespace std;
 
#define f(i,x,n) for(i=x;i<n;i++)
#define fr(i,x,n) for(i=x;i>n;i--)
#define pu push_back           
#define pp pop_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define IOS() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const long long MOD=1e9+7;
const long double PI = acos(-1);
const long long INF=INT_MAX;
const long long LINF=LLONG_MAX;
const long long N=2e5+1;
 
typedef long long ll;
typedef long double ld;
 
int main()
{
    IOS();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll n,m,d,i,j;
    cin>>n>>m>>d;
    ll c[m];
    ll s=0;
    f(i,0,m)
    {
        cin>>c[i];
        s+=c[i];
    }
    if((d-1)*(m+1)+s<n)
    {   
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    ll z=n-s;
    ll res[n+1],ss=0;
    i=0;
    while(1)
    {
        ll w=min(z,d-1);
        ll ff=w;
        while(w--)
        {
            if(i==n)
                break;
            res[i++]=0;
        }
        ll zz=c[ss];
        while(zz--)
        {
            if(i==n)
                break;
            res[i++]=ss+1;
        }
        ss++;
        z-=ff;
        if(i==n)
            break;
    }
    f(i,0,n)
        cout<<res[i]<<' ';
 
    return 0;
 
}