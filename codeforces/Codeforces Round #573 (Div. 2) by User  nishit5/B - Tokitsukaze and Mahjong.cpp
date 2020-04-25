
1191 B - Tokitsukaze and Mahjong.cpp GNU C++17 Accepted
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
  str s1,s2,s3;
  cin>>s1>>s2>>s3;
 
  vector<char>adj[26];
 
 
  adj[s1[1]-'a'].pb(s1[0]);
 
  adj[s2[1]-'a'].pb(s2[0]);
 
  adj[s3[1]-'a'].pb(s3[0]);
  ll mi=2;
  f(i,0,26)
  {
 
    sort(all(adj[i]));
 
  }
  f(i,0,26)
  {
 
    if(adj[i].size()!=0)
    {
 
        if(adj[i].size()==3)
        {
            char q1=adj[i][0];
            char q2=adj[i][1];
            char q3=adj[i][2];
            // cout<<q1<<" "<<q2<<" "<<q3<<edl;
            if(q1==q2&&q2==q3)
            {
                cout<<0;
                return 0;
            }
            if(q1==q2||q2==q3)
            {
                cout<<1;
                return 0;
            }
 
            if(q1==q2-1&&q2==q3-1)
            {
                cout<<0;
                return 0;
            }
            if(q1==q2-1||q2==q3-1||q1==q3-2||q1==q2-2||q2==q3-2||q1==q3-1)
            {
                cout<<1;
                return 0;
            }
            if(q1!=q2&&q2!=q3)
            {
               cout<<2;
               return 0;
            }
        }
        else if(adj[i].size()==2)
        {
            char q1=adj[i][0];
            char q2=adj[i][1];
            if(q1==q2)
            {
                cout<<1;
                return 0;
            }
            if(q1==q2-1||q1==q2-2)
            {
                cout<<1;
                return 0;
            }
            if(q1!=q2)
            {
                mi=2;
            }
        }
      
    }
  }
 cout<<2;
 
 
 
  
 
 
    
 
 
 
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
1191 B - Tokitsukaze and Mahjong.cpp GNU C++17 Accepted
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
  str s1,s2,s3;
  cin>>s1>>s2>>s3;
    ll num[3];
    char alpha[3];
  
    num[0]=s1[0], num[1]=s2[0], num[2]=s3[0];
    alpha[0]=s1[1], alpha[1]=s2[1], alpha[2]=s3[1];
    if(s1==s2&&s2==s3)
    {
        cout<<0<<edl;
        return 0;
    }
    sort(num,num+3);
    sort(alpha,alpha+3);
    
    if(s1==s2||s2==s3||s1==s3)
    {
        cout<<1<<endl;
        return 0;
    }
    if(alpha[0]==alpha[2] && num[1]-num[0]==1 && num[2]-num[1]==1)
    {
        cout<<0<<edl;
        return 0;
    } 
    if((s1[1]==s2[1] && abs(s1[0]-s2[0])==1 ) || (s2[1]==s3[1] && abs(s2[0]-s3[0])==1) || (s3[1]==s1[1] && abs(s3[0]-s1[0])==1) )
    {
        cout<<1;
        return 0;
    }
    if((s1[1]==s2[1] && abs(s1[0]-s2[0])==2 ) || (s2[1]==s3[1] && abs(s2[0]-s3[0])==2) || (s3[1]==s1[1] && abs(s3[0]-s1[0])==2) )
    {
        cout<<1;
        return 0;
    }   
    cout<<2;
    return 0;   
            

 


  



    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 