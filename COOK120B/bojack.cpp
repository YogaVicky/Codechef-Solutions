#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	cout<<2*n+1;
	for(i=0;i<n;i++)
		cout<<'a';
	for(i=0;i<n+1;i++)
		cout<<'b';
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}