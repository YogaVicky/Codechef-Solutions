#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,check,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		vector<ll>v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		if(n==1){
			cout<<v[0]<<endl;
			continue;
		}
		i=0;
		cout<<v[i];
		check = 0;
		for(i=1;i<n-1;i++){
			if(v[i]==v[i-1]+1 && v[i]==v[i+1]-1)
				check = 1;
			else{
				if(check==1)
					cout<<"..."<<v[i];
				else
					cout<<","<<v[i];
				check = 0;
			}
		}
		if(check==1)
			cout<<"..."<<v[i];
		else
			cout<<","<<v[i];
		cout<<endl;
	}
	return 0;
}