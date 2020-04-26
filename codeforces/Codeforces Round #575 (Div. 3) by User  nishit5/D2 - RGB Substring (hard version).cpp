
1196 D2 - RGB Substring (hard version).cpp GNU C++17 Accepted
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



ll dp[200005][3];

int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  ll t;
  cin >> t;

  while(t--)
  {

        
        ll n,k,ans=1e9;
        cin>>n>>k;
        str s1="RGB";
        str s;
        cin>>s;
        f(i,0,n)
        {
              f(j,0,3)
              {
                  dp[i+1][j]=dp[i][j];
                  if(s[i]!=s1[(i+j)%3])
                  {
                      dp[i+1][j]++;
                  }

              } 
        }

        f(i,k,n+1)
        {
            f(j,0,3)
            {
              ans=min(dp[i][j]-dp[i-k][j],ans);
            }
        }
        cout<<ans<<edl;





  }

  


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
1196 D2 - RGB Substring (hard version).cpp GNU C++17 Accepted

#include <bits/stdc++.h>
using namespace std;
#define minpq priority_queue <int, vector<int>, greater<int> >;
#define maxpq  priority_queue <int>;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define ll long long
#define pll pair<ll,ll>
#define pii pair<int,int>
const int mod = 1e9+7, N = 1e5 + 10;
int solve()
{
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  ll max=0,max2=0;
  for(int j=0;j<3;j++)
  {   int c=0,max=0,a[n]={0};
      for(int i=0;i<n;i++)
      {
          if((i+j)%3==0)
          {
              if(s[i]=='R')
                {a[i]++;
                if(i!=0)
                 a[i]=a[i]+a[i-1];
                }
                else
               {    if(i!=0)
                   a[i]=a[i]+a[i-1];
               }
 
          }
          if((i+j)%3==1)
          {
              if(s[i]=='G')
                {a[i]++;
                if(i!=0)
                 a[i]=a[i]+a[i-1];
                }
              else
               {    if(i!=0)
                   a[i]=a[i]+a[i-1];
               }
 
          }
          if((i+j)%3==2)
          {
              if(s[i]=='B')
                {a[i]++;
                  if(i!=0)
                 a[i]=a[i]+a[i-1];
                }
                else
               {    if(i!=0)
                   a[i]=a[i]+a[i-1];
               }
          }
           
 
      }
      for(int i=k-1;i<n;i++)
          {
              if(i==k-1)
              {
                  c=a[i];
              }
              else
              c=a[i]-a[i-k];
 
              if(c>max)
                max=c;
 
          }

      //cout<<max<<" ";
      if(max>max2)
        max2=max;
  }
  if(max2>k)
    cout<<"0"<<"\n";
  else
    cout<<k-max2<<"\n";
}
 
int32_t main(){

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
}