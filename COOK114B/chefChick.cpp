#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
class gfg 
{ 
 public : int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 }  
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
};  
int main(){
	ll t;
	cin>>t;
	gfg g;
	while(t--){
		ll n;
		cin>>n;
		set<ll>a;
		ll i,b;
		for(i=0;i<n;i++){
			cin>>b;
			a.insert(b);
		}
		// ll l =1;
		// for(auto it = a.begin();it!=a.end();it++)
		// 	l = g.lcm(l,*it);
		// // cout<<l<<endl;
		// ll check = l;
		// auto it = a.begin();
		// while(check--){
		// 	if(check%(*it)==0)
		// 		break;
		// }
		// cout<<l-check<<endl;
		cout<<*a.begin()<<endl;
	}
	return 0;
}
