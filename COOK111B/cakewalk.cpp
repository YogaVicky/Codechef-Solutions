#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
	    cin>>n;
	    ll a=0,b=0;
	    while(n%10==0){
	        n/=10;
	        a++;
	    }
	    while(n%2==0){
	        n/=2;
	        b++;
	    }
	    if(n!=1 || b>a){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}