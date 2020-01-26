#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,i,j,k,check=0;
		cin>>a>>b>>c;
		ll sum = a*1+b*2+c*3;
		if(sum%2!=0){
			cout<<"NO"<<endl;
		}
		else{
			while(a>=3){
				a-=2;
			}
			while(b>=3){
				b-=2;
			}
			while(c>=3){
				c-=2;
			}
			ll sum = a*1 + b*2 + c*3;
			for(i=0;i<=a;i++){
				for(j=0;j<=b;j++){
					for(k=0;k<=c;k++){
						if(i*1 + j*2 + k*3 == sum/2){
							check = 1;
							break;
						}	
					}
				}
			}
			if(check==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
	return 0;
}
