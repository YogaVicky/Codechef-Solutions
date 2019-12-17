#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
int main(){
	long int s;
	int n , m , i , j , p , q;
	cin>>n;
	while(n--){
		vector<int>a[12];
		cin>>m;
		while(m--){
			cin>>q;
			cin>>p;
			a[q].push_back(p);
		}
		s = 0;
		for(i=1;i<9;i++){
			if(a[i].begin()!=a[i].end()){
				sort(a[i].begin(), a[i].end(), greater<int>());
				s = s + *a[i].begin();
			}
		}
		cout<<s<<endl;
	}
}