#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
long int res(int s){
	if(s<=1)
		return 0;
	return res(s-1) + s-1;
}
int main(){
	long int s , n , m , i , e , r;
	cin>>n;
	while(n--){
		s = 0;
		r = 0;
		cin>>m;
		while(m--){
			cin>>e;
			if(e==2)
				s++;
			if(e==0)
				r++;
		}
		// cout<<s<<endl;
		cout<<res(s) + res(r)<<endl;
	}
	return 0;
}