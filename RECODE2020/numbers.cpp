#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		map<ll,ll>m;
		for(i=1;i<=1000;i++)
			m[i]=0;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n-1;i++){
			m[a[i]]++;
			if(a[i]==a[i+1])
				i++;
		}
		for(;i<n;i++){
			m[a[i]]++;
		}
		ll max = 0,res=1;
		for(i=1;i<=1000;i++){
			if(m[i]>max){
				max = m[i];
				res = i;
			}
		}
		cout<<res<<endl;

	}
	return 0;
}