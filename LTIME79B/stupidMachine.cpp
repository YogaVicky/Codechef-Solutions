#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,n,i,e,count,pos,c;
	cin>>t;
	while(t--){
		cin>>n;
		vector<ll>v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		e = n;
		count=0;
		c=0;
		while(e>0){
			ll pos = std::min_element(v.begin(),v.begin()+e) - v.begin();
			// cout<<pos<<endl;
			ll m = *std::min_element(v.begin(), v.begin()+e);
			// cout<<m<<endl;
			count+=m*(e-pos);
			// cout<<count<<endl;
			e = pos;
			// cout<<e<<endl;
		}
		cout<<count<<endl; 
	}
	return 0;
}