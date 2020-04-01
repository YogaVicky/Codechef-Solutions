#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,tax=0;
		cin>>a;
		if(a>250000)
			tax+=(a-250000)*0.05;
		if(a>500000)
			tax+=(a-500000)*0.05;
		if(a>750000)
			tax+=(a-750000)*0.05;
		if(a>1000000)
			tax+=(a-1000000)*0.05;
		if(a>1250000)
			tax+=(a-1250000)*0.05;
		if(a>1500000)
			tax+=(a-1500000)*0.05;
		cout<<a-tax<<endl;
	}
	return 0;
}