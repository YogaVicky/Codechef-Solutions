#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q,l,r,i,j;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		cin>>q;
		while(q--){
			cin>>l>>r;
			ll check;
			check = a[l-1];
			for(j=l;j<r;j++)
				check = check&a[j];
			if(check%2==0)
				cout<<"EVEN"<<endl;
			else
				cout<<"ODD"<<endl;
		}
	}
	return 0;
}