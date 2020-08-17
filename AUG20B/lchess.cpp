#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,p;
	cin>>n>>p;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	ll mi=-1,m=INT_MAX;
	for(i=0;i<n;i++){
		if(a[i]<p && p%a[i]==0){
			if(p/a[i]<m){
				m = p/a[i];
				mi = a[i];
			}
		}
	}
	cout<<mi<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}