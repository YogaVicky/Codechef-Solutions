#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j,k,m,x,y;
	cin>>n>>m>>x>>y;
	if(n==1 && m==1){
		cout<<x<<endl;
		return;
	}
	else if(y>=2*x)
		cout<<n*m*x<<endl;
	else if(y>=x){
		ll a = x;
		ll b = y-x;
		if(y%2==0){
			if(n%2==0 || m%2==0){
				cout<<n*m*y/2<<endl;
			}
			else{
				ll d = (n*m)/2;
				ll e = (n*m)/2 + 1;
				cout<<a*e+d*b<<endl;
			}
		}
		else{
			if(n%2==0 || m%2==0){
				cout<<((n*m)/2)*a + ((n*m)/2)*b<<endl;
			}
			else
				cout<<(((n*m)/2)+1)*a + ((n*m)/2)*b<<endl;
		}
	}
	else{
		ll a = y;
		ll b = 0;
		// cout<<a<<" "<<b<<endl;
		if(y%2==0){
			if(n%2==0 || m%2==0){
				cout<<n*m*y/2<<endl;
			}
			else{
				ll d = (n*m)/2;
				ll e = (n*m)/2 + 1;
				cout<<a*e+d*b<<endl;
			}
		}
		else{
			if(n%2==0 || m%2==0){
				cout<<((n*m)/2)*a + ((n*m)/2)*b<<endl;
			}
			else
				cout<<(((n*m)/2)+1)*a + ((n*m)/2)*b<<endl;
		}
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}