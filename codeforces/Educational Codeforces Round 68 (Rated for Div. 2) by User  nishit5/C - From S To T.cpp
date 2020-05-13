
1194 C - From S To T.cpp GNU C++17 Accepted
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

    string s,t,p;
    cin>>s>>t>>p;
    map<char,ll>q1,q2;
    // if(s.size()>=t.size()&&s!=t)
    // {
    //   cout<<"NO"<<edl;
    //   continue;
    // }
    for(ll i=0;i<p.size();i++)
    {
      q2[p[i]]++;
    }
   
    
    str s2="",s3="";
    ll f=0;
    f(i,0,t.size())
    {
      s2=s.substr(i);
      s3=s.substr(0,i);
      if(t[i]==s[i])
      {
                
        continue;
      }
      else if(t[i]!=s[i])
      {
        if(q2[t[i]]!=0)
        {
          s3+=t[i];
          q2[t[i]]--;
        }
        else
        {
          f=1;
          // cout<<"yes"<<edl;
          break;

        }
        s=s3+s2;
      }
      // cout<<s2<<" "<<s3<<" "<<s<<" "<<p<<edl;

      

    }
    if(f)
    {
      cout<<"No"<<edl;
    }
    else
    {
      if(s==t)
      {
        cout<<"Yes"<<edl;
      }
      else
        cout<<"No"<<edl;
    }

  }
  


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 