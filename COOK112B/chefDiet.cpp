#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,n,o,b,k,check,i;
	cin>>t;
	while(t--){
		o = 0;
		cin>>n;
		check = 0;
		cin>>k;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++){
			if(o+a[i]<k){
				check = 1;
				cout<<"NO "<<i+1<<endl;
				break;
			}
			o = o+a[i]-k;
		}
		if(check==0)
			cout<<"YES"<<endl;
	}
	return 0;
}