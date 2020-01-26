#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<set>
using namespace std;
int find(vector<float>v , int a , int i){
	int l=i,h=v.size()-1,mid, j;
	while(l<=h){
		mid = (l+h)/2;
		if(v[mid] == a){
			int check = -1;
			for(j=i+1;i<v.size();j++){
				if(v[j] == a)
					check++;
			}
			return mid;
		}
		else if(v[mid]<a)
			l = mid +1;
		else
			h = mid -1;
	}
	return mid;
}
int main(){
	int n , i, j , m , a , check , ind;
	cin>>n;
	while(n--){
		vector<float>v;
		check = 0;
		cin>>m;
		for(i=0;i<m;i++){
			cin>>a;
			v.push_back(a);
		}
		for(i=0;i<m-1;i++){
			ind = find(v,v[i]*2,i);
			cout<<ind<<endl;
			check += ind - i;
		}
		cout<<check<<endl;
	}
	return 0;
}