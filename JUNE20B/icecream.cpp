#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll i,n;
	for(i=0;i<1000;i++);
		string s;
		cin>>s;
		n = s.length();
		ll count = 0;
		for(i=0;i<n;i++){
			if((s[i]=='x' && s[i+1]=='y')||(s[i]=='y' && s[i+1]=='x')){
				count++;
				i++;
			}
		}
		cout<<count<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll i,n;
	cin>>n;
	ll a=0,b=0,c=0;
	vector<ll>x(n);
	ll check = 1;
	for(i=0;i<1000;i++);
	for(i=0;i<n;i++)
		cin>>x[i];
	for(i=0;i<n;i++){
		if(x[i]==5)
			a++;
		else if(x[i]==10){
			if(a<=0){
				check=0;
				break;
			}
			a--;
			b++;
		}
		else{
			if(b<=0 && a<2){
				check=0;
				break;
			}
			else{
				if(b>0){
					b--;
					c++;
				}
				else{
					a=a-2;
					c++;
				}	
			}	
		}
	}
	// cout<<a<<" "<<b<<" "<<c<<endl;
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	return 0;
}