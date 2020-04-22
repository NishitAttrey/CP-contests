
1326 D2 - Prefix-Suffix Palindrome (Hard version).cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds; 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;
 
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define int ll
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int32_t main() {
    fast();
    ll tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}

void test(){
    string s;
    cin >> s;
    int n = s.size();
    int i = 0, j = n - 1;
    int c = 0;
    while( i < j){
        if(s[i] == s[j]){
            i++;
            c++;
            j--;
        }
        else
            break;
    }
    if( i > j){
        cout << s << endl;
        return ; 
    }
    string s1 = s.substr(i,j-i+1);
    string s2 = s1;
    reverse(all(s1));
    string s3 = s1 + '#' + s2;
    string s4 = s2 + '#' + s1;
    function<vector<int>(string)>longest_prefix =[&](string s){
        vector<int> lps;
        lps.resize(s.size()+10,0);
        lps[0] = 0;
        int i = 1, len = 0;
        while(i < s.size()){
            if(s[i] == s[len]){
                len ++ ;
                lps[i] = len;
                i++;

            }
            else{
                if(len != 0){
                    len = lps[len-1];
                }
                else{
                    lps[i] = 0;
                    i++; 
                }
            }
        }
        return lps;
    };
    vector<int>lps1 = longest_prefix(s3);
    vector<int>lps2 = longest_prefix(s4);
    int len1 = lps1[s3.size() - 1];
    int len2 = lps2[s4.size() - 1];
    string tmp = s.substr(0,c);
    reverse(all(tmp));
    if(len1 >= len2){

        cout << s.substr(0,c) + s3.substr(0,len1) + tmp << endl;
    }
    else{
        cout << s.substr(0,c) + s4.substr(0,len2 ) + tmp << endl;
    }
}  

1326 D2 - Prefix-Suffix Palindrome (Hard version).cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds; 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;
 
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define int ll
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
int32_t main() {
    fast();
    ll tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
struct Manacher {
  // IGNORES FIRST LETTER - in[0] must be space
  // par[i] = k <=> [i - k + 1, i + k] is maximal palindrome
  // npar[i] = k <=> [i - k, i + k] is maximal palindrome
  vector<int> par, npar;
  Manacher(string in) {
    assert(in[0] == ' ');
    int orig_n = in.size() - 1;
    string s = " #";
    for (int i = 1; i <= orig_n; i++) {
        s += in[i];
        s += '#';
    }
    s += '$';
    int new_n = s.size() - 2;
    npar.resize(new_n + 2);
    int furth_beg = 0;
    int furth_end = 0;
    for (int i = 1; i <= new_n; i++) {
        if (furth_end < i) {
            furth_beg = i;
            furth_end = i;
        }
        int corr_npar = furth_beg + furth_end - i;
        if (furth_end > i + npar[corr_npar]) {
            npar[i] = npar[corr_npar];
        } 
        else {
            npar[i] = furth_end - i;
            furth_beg = i - npar[i];
            while (s[furth_beg - 1] == s[furth_end + 1]) {
                furth_beg--;
                furth_end++;
                npar[i]++;
            }
        }
    }
    par.resize(orig_n + 2);
    for (int i = 1; i <= orig_n; i++) {
        if (i < orig_n) {
            par[i] = npar[2 * i + 1] / 2;
        } 
        npar[i] = npar[2 * i] / 2;
    }
    npar.resize(orig_n + 2);
  }
};
 
int PalPref(string s) {
  int n = s.size();
  s = " " + s; 
  Manacher man(s);
  int res = 0;
    f(i,1,n+1) {
        if(man.par[i] == i) {
            res = max(res, 2 * i);
        }
        if (man.npar[i] == i - 1) {
          res = max(res, 2 * i - 1);
        }
  }
  return res;
}
void test(){
    string s;
    cin >> s;
    int n = s.size();
    if(s.size() == 1){
        cout << s << endl;
        return ;
    }
    int i = 0,j = n-1,c = 0;
    while(i<j){
        if(s[i] == s[j]){
            i++;
            j--;
            c++ ;
        }
        else
            break;
    }
    if(i > j){
        cout << s << endl;
        return;
    }
    string s1 = s.substr(i, j - i + 1);
    string s2 = s1;
    reverse(all(s2));
    int p1 = PalPref(s1);
    int p2 = PalPref(s2);
    if(p1 >= p2){
        cout << s.substr(0,c + p1) + s.substr(j + 1) << endl;
    }
    else
        cout << s.substr(0,c) + s.substr(j + 1 - p2) << endl;

    

}