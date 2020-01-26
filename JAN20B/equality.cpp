#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,q,l,r,i,max,min;
	cin>>n>>q;
	vector<ll>a(n),inc(n),dec(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	inc[0] = 0;
	dec[0] = 0;
	ll check = 1;
	for(i=1;i<n;i++){
		if(a[i]>a[i-1]){
			if(check==1){
				inc[i]=inc[i-1]+1;
				check = 0;
			}
			else
				inc[i]=inc[i-1];	
		}
		else{
			inc[i]=inc[i-1];
			check=1;	
		}
	}
	check = 1;
	for(i=1;i<n;i++){
		if(a[i]<a[i-1]){
			if(check==1){
				dec[i]=dec[i-1]+1;
				check = 0;
			}
			else
				dec[i]=dec[i-1];	
		}
		else{
			dec[i]=dec[i-1];
			check=1;	
		}
	}
	while(q--){
		cin>>l>>r;
		max = inc[r-1]-inc[l-1];
		if(l-1!=0){
			if((a[l-1]>a[l-2]&&a[l-1]<a[l]))
				max++;
		}
		min = dec[r-1]-dec[l-1];
		if(l-1!=0){
			if(a[l-1]<a[l-2]&&a[l-1]>a[l])
				min++;
		}
		if(max == min)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}