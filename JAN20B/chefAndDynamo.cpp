#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a,b,c,d,e,s,check=1;
		cin>>n>>a;
		ll x = pow(10,n); 
		ll y = (5*pow(10,n));
		s = a + 2*x;
		cout<<s<<endl;
		cin>>b;
		c = x - b;
		cout<<c<<endl;
		cin>>d;
		e = x - d;
		cout<<e<<endl;
		cin>>check;
		if(check==-1){
			return 0;
		}
	}
	return 0;
}
