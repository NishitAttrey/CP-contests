
1284 B - New Year and Ascent Sequence.cpp GNU C++17 Accepted
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
vec minn,maxx;
int32_t main() {
    fast();
    int n;
    cin >> n;
    int x,cnt=0,ans=0;
    f(i,0,n){
        cin >> x;
        vec val(x);
        int ma=-1,mi=1e10;
        f(j,0,x){
            cin >> val[j];
            ma=max(ma,val[j]);
            mi=min(mi,val[j]);
            // cout<<i<<" "<<val[j]<<" "<<mi<<" "<<ma<<edl; 
        }
        int foo=0,flag=0;
        int ff=val[0];
        f(j,1,x){
            if(val[j]>ff){
                flag=1;
                break;
            }
            else
                ff=val[j];
        }
        if(flag){
            // cout<<i<<edl;
            cnt++;
        }
        else{
            minn.pb(mi);
            maxx.pb(ma);
        }

    }
    // cout<<"maxx size "<<maxx.size()<<" minn size "<<minn.size()<<edl;
     sort(all(minn));
    sort(all(maxx));
    // for(auto s:maxx)
    //     cout<<s<<" ";
    // cout<<edl;
    // for(auto s:minn)
    //     cout<<s<<' ';
    // cout<<edl;
    f(i,0,minn.size()){
        int x1=upper_bound(all(maxx),minn[i])-maxx.begin();
        ans+=(maxx.size()-x1+cnt);
    }
    // cout<<"Ans\n";
    // cout<<ans <<" "<<cnt*n<<edl;
    cout<<ans+(cnt*n);
    return 0;
}
 