#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n,i,j;
	cin>>n;
	string s;
	cin>>s;
	ll check=0;
	ll a[26]={0};
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,j;
		cin>>n;
		string s;
		cin>>s;
		ll check=0;
		ll b[26]={0};
		for(i=0;i<n;i++){
			b[s[i]-'a']++;
		}
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
				for(i=0;i<10000;i++);
					for(i=0;i<10000;i++);
						for(i=0;i<10000;i++);
		for(i=0;i<26;i++){
			if(b[i]%2==1){
				check=1;
				break;
			}
		}
		if(check==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}