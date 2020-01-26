#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		vector<ll>s(n),v(n),p(n);
		cin>>n;
		for(i=0;i<n;i++){
			cin>>s[i];
			cin>>p[i];
			cin>>v[i];
		}
		ll res = 0;
		for(i=0;i<n;i++){
			if(s[i]+1!=0){
				if( (p[i]/(s[i]+1))*v[i] > res)
					res = (p[i]/(s[i]+1))*v[i];
			}
		}	
		cout<<res<<endl;
	}
	return 0;
}