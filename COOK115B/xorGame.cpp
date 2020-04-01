#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,check=0,i;
		cin>>n;
		vector<ll>a(n),b(n),c(n),d(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		for(i=0;i<n;i++){
			c[i]==a[i];
		}
		for(i=0;i<n;i++){
			d[i]==b[i];
		}
		sort(c.begin(),c.end());
		sort(d.begin(),d.end());
		for(i=0;i<n;i++){
			if(c[i]!=d[i]){
				check=1;
				break;
			}
		}
		if(check==0){
			for(i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
		else{
			ll check1 = 0;
			if(n<=4){
				if(n==1){
					cout<<b[0]<<endl;
					check1 = 1;
				}
				else if(n){
					ll check4 = 0;
					sort(a.begin(),a.end());
					sort(b.begin(),b.end());
					ll f = a[0]^b[n-1];
					for(i=0;i<n;i++){
						if(a[i]^b[n-i-1]!=f){
							check4 = 1;
							break;
						}
					}
					if(check4==0){
						for(i=0;i<n;i++)
							cout<<b[i]<<" ";
						cout<<endl;
					}
					else
						cout<<-1<<endl;
				}
			}
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}