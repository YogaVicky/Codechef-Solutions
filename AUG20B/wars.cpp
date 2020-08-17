#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,p;
	cin>>n>>p;
	ll check = 1;
	while(n>0){
		if(p==0){
			check = 0;
			break;
		}
		n-=p;
		p/=2;
	}
	cout<<check<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}