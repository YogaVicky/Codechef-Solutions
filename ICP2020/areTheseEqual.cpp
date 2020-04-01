#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k,check=0,i,sum=0;
		cin>>n>>k;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a.begin(),a.end(),greater<ll>());
		if(a[0]<=sum/k && sum%k==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}