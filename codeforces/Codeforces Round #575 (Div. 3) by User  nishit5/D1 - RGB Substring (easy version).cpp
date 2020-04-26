
1196 D1 - RGB Substring (easy version).cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;




int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    str s;
    cin>>s;
    ll ma=1e9;
    str s1,s2,s3;
  
      s1="BRG";
    
    
      s2="RGB";
  
      s3="GBR";
    
   
    f(i,0,n-k+1)
    {
      str ss=s.substr(i,k);
      ll c1=0,c2=0,c3=0;
      // cout<<s2<<" "<<s1<<edl;
      f(j,0,k)
      {

        if(ss[j]!=s1[j%3])
          c1++;
        if(ss[j]!=s2[j%3])
          c2++;
        if(ss[j]!=s3[j%3])
          c3++;


      }
      ma=min(ma,c1);
      ma=min(ma,c2);
      ma=min(ma,c3);

    }
    cout<<ma<<edl;
  }


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 