#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,i,j,k;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll count = 0;
		// cout<<s.length()<<endl;
		for(i=0;i<s.length();i++){
			for(j=i;j<s.length();j++){
				string s1="\0";
				s1.append(s);
				for(k=i;k<=j;k++){
					if(s1[k]=='0')
						s1[k]='1';
					else
						s1[k]='0';
				}
				// cout<<s1<<endl;
				for(k=0;s1[k+1]!='\0';k++){
					if(s1[k]==s1[k+1])
						count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}