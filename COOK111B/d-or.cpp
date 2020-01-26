#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll x, unsigned ll y) { 
    ll temp; 
    if(y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if(y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		ll s[60]={0},\e[60]={0},i;
		i=59;
		while(l!=0){
			s[i] = l%2;
			l = l/2;
			i--;
		}
		// for(i=0;i<60;i++)
		// 	cout<<s[i];
		// cout<<endl;
		i=59;
		while(r!=0){
			e[i] = r%2;
			r = r/2;
			i--;
		}
		// for(i=0;i<60;i++)
		// 	cout<<e[i];
		// cout<<endl;
		ll res = 0;
		for(i=0;i<60;i++){
			if(s[i]!=e[i])
				break;
			else
				res+=s[i]*power(2,60-i-1);
		}
		for(;i<60;i++){
			res+=power(2,60-i-1);	
		}
		cout<<res<<endl;
	}
	return 0;
}