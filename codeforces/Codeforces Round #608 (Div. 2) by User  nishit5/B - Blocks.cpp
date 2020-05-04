
1271 B - Blocks.cpp GNU C++17 Accepted
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
int32_t main() {
    fast();
    int n;
    cin >> n;
    str s;
    cin >> s;
    int c1=0,c2=0;
    f(i,0,n){
        if(s[i]=='W'){
            c1++;
        }
        else
            c2++;
    }
    if(c1==n or c1==0){
        cout<<0;
        return 0;
    }
    int cou=abs(c2-c1);
    // cout<<cou<<' '<<n<<edl;

    if(n%2==cou%2){
        vec re,re1;
        str s1=s;
        bool ch=true;
        f(i,0,s1.size()-1){
            if(s1[i]=='B'){
                re.pb(i+1);
                s1[i]='W';
                if(s1[i+1]=='W'){
                    s1[i+1]='B';
                }
                else
                    s1[i+1]='W';
            }

        }
        f(i,0,s1.size()){
            if(s1[i]!='W'){
                ch=false;
                break;
            }
        }
        if(ch){
            cout<<re.size()<<edl;
            for(auto s:re){
                cout<<s<<" ";
            }
            return 0;
        }
        s1=s;
        ch=true;
          f(i,0,s1.size()-1){
            if(s1[i]=='W'){
                re1.pb(i+1);
                s1[i]='B';
                if(s1[i+1]=='W'){
                    s1[i+1]='B';
                }
                else
                    s1[i+1]='W';
            }

        }
        f(i,0,s1.size()){
            if(s1[i]!='B'){
                ch=false;
                break;
            }
        }
        if(ch){
            cout<<re1.size()<<edl;
            for(auto s:re1){
                cout<<s<<" ";
            }
            return 0;
        }
        else
            cout<<-1<<edl;


    }
    else{
        cout<<-1<<edl;
        return 0;
    }
    


    return 0;
}
 