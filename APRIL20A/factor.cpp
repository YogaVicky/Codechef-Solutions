#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back
#define inf INT_MAX  
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j,a,b;
		cin>>n;
		ll g[n+1][n+1];
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
				g[i][j]=inf;
		}
		for(i=0;i<n;i++){
			cin>>a>>b;
			g[a][b]=1;
		}
		for(i=1;i<=n;i++){
			cin>>a;
			m[i]=a;
		}
		ll m;
		cin>>m;
		while(m--){
			cin>>a>>b;
			
		}
	}
	return 0;
}