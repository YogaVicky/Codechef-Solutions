#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
using namespace std;
int main(){
	int i ,t , n , check , j , k , l;
	string s;
	cin>>t;
	for(i=0;i<t;i++){
		int min = INT_MAX;
		check = 0;
		vector<int>a[26];
		cin>>n;
		cin>>s;
		for(j=0;s[j]!='\0';j++){
			a[s[j] - 97].push_back(j);
		}
		for(k=0;k<26;k++){
			auto it = a[k].begin();
			if(a[k].begin()!=a[k].end() && a[k].size() > 1){
				for(l=1;l<a[k].size();l++){
					if(min > *(it+1) - *it){
						min = *(it+1) - *it;
						check = 1;
					}
					it++;
				}
			}
		}
		// cout<<min<<endl;
		if(check)
			cout<<n - min<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}