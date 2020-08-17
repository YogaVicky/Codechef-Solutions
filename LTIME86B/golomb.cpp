#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
int main(){
	ll t,i,j;
	cin>>t;
	ll a[1000001];
	a[0]=0;
	ll f = 1;
	for(i=1;i<1000001;i++){
		for(j=0;j<f;j++){
			if(i==1000001)
				break;
			a[i]=f*f;
			i++;
		}
		f++;
		i--;
	}
	ll p[1000001];
	p[0]={0};
	for(i=1;i<1000001;i++){
		p[i]=a[i]+p[i-1];
	}
	while(t--){
		ll l,r;
		cin>>l>>r;
		cout<<p[r]-p[l-1]<<endl;
	}
	return 0;
}