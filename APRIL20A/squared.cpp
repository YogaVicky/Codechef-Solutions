#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back  
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		ll l=0,r=0,p=a[r],count=0;
		while(a[r]==0){
			count+=n-r;
			r++;
			l=r;
			p=a[r];
		}
		while(l!=n&&r!=n){
			if(p%4==0){
				p/=a[l];
				count+=n-r;
				l++;
			}
			else{
				r++;
				if(a[r]==0)
					count+=n-r;+1;
				while(a[r]==0 && r<n){
					count+=n-r;
					r++;
					l=r;
					p=1;
				}
				p*=a[r];
			}
		}
		// cout<<count<<endl;
		ll t2=0;
		for(i=0;i<n;i++){
			if(a[i]%2!=0){
				count++;
				t2++;
			}
			else{
				t2--;
				if(t2>0){
					count+=(t2*(t2+1))/2;
				}
				t2=0;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}