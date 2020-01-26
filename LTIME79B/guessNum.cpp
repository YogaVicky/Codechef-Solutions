#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,m,d,x,i;
		vector<ll>v;
		cin>>a>>m;
		x = m/a;
		ll count=0;
		while((m-x*a)<=x){
			d = m-x*a;
			if(d && x%d==0){
				count++;
				v.push_back(x);
			}
			x--;
		}
		cout<<count<<endl;
		// cout<<v.size()<<endl;
		for(i=v.size()-1;i>=0;i--)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}