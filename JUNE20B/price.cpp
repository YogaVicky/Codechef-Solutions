#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,m;
	cin>>n>>m;
	ll sum1 = 0;
	vector<ll>a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
		sum1+=a[i];
	}
	ll sum = 0;

	for(i=0;i<n;i++){
		if(a[i]>m)
			sum+=m;
		else
			sum+=a[i];
	}
	cout<<sum1-sum<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,m;
		cin>>n>>m;
		ll sum1 = 0;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
			sum1+=a[i];
		}
		ll sum = 0;
		for(i=0;i<1000;i++);
		for(i=0;i<n;i++){
			if(a[i]>m)
				sum+=m;
			else
				sum+=a[i];
		}
		cout<<sum1-sum<<endl;
		}
	return 0;
}