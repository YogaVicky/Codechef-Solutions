#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int a[10] = {6,2,5,5,4,5,6,3,7,6};
	ll t;
	cin>>t;
	while(t--){
		ll a1,b;
		cin>>a1>>b;
		ll res = a1+b;
		ll ans = 0;
		while(res!=0){
			ans+=a[res%10];
			res/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}