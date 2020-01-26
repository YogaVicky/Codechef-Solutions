#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,tcount,count,i,n,k;
	cin>>t;
	while(t--){
		tcount = count = 0;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<ll>h(n);
		vector<ll>t(n);
		h[0]=0;
		for(i=1;s[i]!='\0';i++){
			if(s[i-1]=='0')
				h[i]=0;
			else
				h[i]=h[i-1]+1;
		}
		t[n-1]=0;
		for(i=n-2;i>=0;i--){
			if(s[i+1]=='0')
				t[i]=0;
			else
				t[i]=t[i+1]+1;
		}
		for(i=0;i+k<=n;i++){
			tcount = h[i] + t[i+k-1] + k;
			count = max(count,tcount);
		}
		cout<<count<<endl;
	}
	return 0;
}