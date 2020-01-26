#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		if(w1+w2+w3<=s)
			cout<<"1"<<endl;
		else if(w1+w2>s && w2+w3>s)
			cout<<"3"<<endl;		
		else
			cout<<"2"<<endl;	
	}	
	return 0;
}