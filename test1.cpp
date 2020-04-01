#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		vector<ll>a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		ll max1=0,max2=0;
		for(i=0;i<n/2;i++){
			if(a[i]>max1)
				max1 = a[i];
		}
		for(i=n/2;i<n;i++){
			if(a[i]>max2)
				max2 = a[i];
		}
		// cout<<max1<<" "<<max2<<endl;
		if(max1==max2){
			ll pos1,pos2;
			for(i=0;i<n/2;i++){
				if(a[i]==max1){
					pos1 = i+1;
					break;		
				}	
			}
			for(i=n-1;i>=n/2;i--){
				if(a[i]==max2){
					pos2 = i+1;
					break;		
				}	
			}
			// cout<<pos2<<" "<<pos1<<endl;
			if(pos2-pos1<n/2)
				cout<<n/2-(pos2-pos1)<<endl;
			else
				cout<<0<<endl;
		}
		else if(max1>max2){
			ll pos1=0,pos2=0;
			for(i=0;i<n/2;i++){
				if(a[i]==max1){
					pos1 = i+1;
					break;		
				}	
			}
			for(i=n/2-1;i>=0;i--){
				if(a[i]==max1){
					pos2 = i+1;
					break;		
				}	
			}
			cout<<n/2-(pos2-pos1)<<endl;
		}
		else{
			ll pos;
			for(i=n-1;i>=0;i--){
				if(a[i]==max2){
					pos = i+1;
					break;		
				}	
			}
			cout<<n-pos+1<<endl;
		}
	}
	return 0;
}