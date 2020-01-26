#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		int b[110]={0};
		for(i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]=i;
		}
		sort(a.begin(),a.end());
		if(b[a[0]]<b[a[n-1]])
			cout<<a[0]<<" "<<a[n-1]<<endl;
		else
			cout<<a[n-1]<<" "<<a[0]<<endl;
	}
}