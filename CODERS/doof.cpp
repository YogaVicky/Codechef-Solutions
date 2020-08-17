#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
#include<bits/stdc++.h>
#define nl "\n"
#define MAX 10e9
#define MAXN 100001 
#define inf_int 2e9
#define inf_ll 2e18
#define e 1e-9
void solve(){
	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i,s=0;
	cin>>n;
	vector<ll>b(n);
	for(i=0;i<n;i++)
		cin>>b[i];
	ll check=0;
	for(i=0;i<n;i++){
		if(b[i]%2==0){
			check=1;
		}
	}
	for(i=0;i<10000;i++);
		for(i=0;i<10000;i++);
			for(i=0;i<10000;i++);
	if(check==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
}