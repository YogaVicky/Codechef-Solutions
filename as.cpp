#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<set>
using namespace std;
int main(){
	int n , i, j , m , a , check;
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
			for(j=i+1;j<m;j++){
				if(v[i]/2 <= v[j] && v[j]/2 <= v[i])
					check++;
			}
		}
		cout<<check<<endl;
	}
	return 0;
}