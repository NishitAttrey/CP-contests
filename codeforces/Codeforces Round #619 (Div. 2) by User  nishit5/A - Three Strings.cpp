
1301 A - Three Strings.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define int ll

void test(){
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	int ff=0;
	f(i,0,s1.size()){
			if(s3[i]==s1[i]){
				s2[i]=s3[i];
			}
			else if(s3[i]==s2[i]){
				s1[i]=s3[i];
			}
			else{
				ff=1;
				break;
			}
		
	}
	if(s1==s2 && ff==0){
		cout<<"YES\n";
	}
	else
	cout<<"NO\n";


}  

int32_t main() {
    int t;
    cin>>t;
    f(i,0,t) test();   
    return 0;
}

