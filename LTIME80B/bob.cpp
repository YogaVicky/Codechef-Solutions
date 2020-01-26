#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a,b,c,i,check=0;
		cin>>n>>a>>b>>c;
		vector<ll>v(n);
		sort(v.begin(),v.end());
		for(i=0;i<n;i++)
			cin>>v[i];
		ll res = c;
		for(i=0;i<n;i++){
			if((v[i]>a&& v[i]<b)||(v[i]>b&& v[i]<a))
				check = 1;
		}
		if(check==1)
			res+=abs(b-a);
		else{
			if(a<b){
				if(b<v[0])
					res+=(v[0]-b)*2 + b-a;
				else
					res+= b-v[n-1] + a -v[n-1];
			}
			else{
				if(b<v[0])
					res+= v[0]-b + v[0] -a;
				else
					res+= (b-v[n-1])*2 + a -b;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}