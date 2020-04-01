#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,p,i,check = 0,check3 = 0,y;
		cin>>n>>p;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++){
			if(p%a[i]!=0){
				check=1;
			}
			if(i!=0){
				if(a[i]%a[i-1]!=0){
					check3 = 1;
					y = i;
				}
			}
		}
		if(check==1){
			cout<<"YES"<<" ";
			for(i=0;i<n;i++){
				if(p%a[i]!=0){
					cout<<p/a[i] + 1<<" ";
					i++;
					break;
				}
				else
					cout<<0<<" ";
			}
			for(;i<n;i++)
				cout<<0<<" ";
			cout<<endl;  
		}
		else if(check3==1){
			cout<<"YES"<<" ";
			for(i=0;i<y-1;i++)
				cout<<0<<" ";
			ll g = ((p/a[y])-1)*a[y],h,j;
			for(j=0;;j++){
				if(g + a[y-1]*j > p)
					break;
			}
			cout<<j<<" "<<(p/a[y])-1<<" ";
			for(i=y+1;i<n;i++)
				cout<<0<<" ";
			cout<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}