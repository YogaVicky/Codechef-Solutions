#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int chk(int n){
	int count =0;
	while(n){
		n=n/10;
		++count;
	}
	return count;
}
int compress(string s){
	int count = 1,total=0,n;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1])
			++count;
		else{
			n=chk(count);
			total = total+n+1;
			count=1;
		}
	}
	return total;
}
int main(){
	string s,s1,s2;
	int t,n;
	cin>>t;
	while(t--){
		cin>>s;
		n = compress(s);
		if(n<s.size())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}