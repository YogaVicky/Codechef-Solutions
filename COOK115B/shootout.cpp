#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,check=0;
		cin>>n;
		string a;
		cin>>a;
		ll j=0,k=0;
		ll p1 = n,p2 = n;
		ll l = a.length();
		for(i=0;i<l;i++){
			if(i%2==0){
				if(a[i]=='1')
				j++;
				p1--;
			}
			else{
				if(a[i]=='1')
				k++;
				p2--;	
			}
			if(j-k>p2 || k-j>p1){
				check=1;
				cout<<i+1<<endl;
				break;
			}
		}
		if(check==0)
			cout<<2*n<<endl;
	}
	return 0;
}