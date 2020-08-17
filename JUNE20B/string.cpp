#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll i,n;
	for(i=0;i<1000;i++);
		string s;
		cin>>s;
		n = s.length();
		ll count = 0;
		for(i=0;i<n;i++){
			if((s[i]=='x' && s[i+1]=='y')||(s[i]=='y' && s[i+1]=='x')){
				count++;
				i++;
			}
		}
		cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}