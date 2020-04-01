#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll i,check=0;
		string a;
		cin>>a;
		ll l = a.length();
		if(l>=4){
			if(a[l-1]=='0'&&a[l-2]=='0'&&a[l-3]=='0'&&a[l-4]=='1'){
				cout<<"YES"<<endl;
				check = 1;
			}
		}
		if(check==0)
			cout<<"NO"<<endl;
	}
	return 0;
}