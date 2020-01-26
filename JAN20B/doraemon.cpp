#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,i,j;
		cin>>n>>m;
		ll a[n][m];
		ll count = n*m;
		ll t,b,l,r;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cin>>a[i][j];
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				t = i-1;
				b = i+1;
				l = j-1;
				r = j+1;
				while(t>=0&&b<n&&l>=0&&r<m){
					if(a[t][j]==a[b][j] && a[i][l]==a[i][r]){
						count++;
						t--;
						b++;
						l--;
						r++;
						// cout<<i<<" "<<j<<endl;
					}
					else 
						break;
				}				
			}
		}
		cout<<count<<endl;
	}
	return 0;
}