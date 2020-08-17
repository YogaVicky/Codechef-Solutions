#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t,i;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string s1="\0",s2="\0";
		for(i=1;i<s.length();i++)
			s1+=s[i];
		s1+=s[0];
		s2+=s[s.length()-1];
		for(i=0;i<s.length()-1;i++)
			s2+=s[i];
		if(s1==s2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}