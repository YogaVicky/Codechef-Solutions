#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,i,j=0,res=1;
		cin>>n>>m;
		res = pow(m,n);
		if(n>2){
			n-=2;
			ll diff = 0,check=1;
			for(i=n;i>0;i--){
				if(check==1){
					diff+=i*m;
					check=0;
				}
				else{
					diff-=i*m;
					check=1;	
				}
			}
			res = res-diff;
		}
		ll mod = pow(10,9)+7;
		res = res%mod; 		
		cout<<res<<endl;
	}
	return 0;
}