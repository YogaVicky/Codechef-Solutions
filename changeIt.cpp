#include<bits/stdc++.h>
using namespace std;
int main(){
	int a , n , b , max , m ,i , j ,k;
	cin>>n;
	while(n--){
		int a[101] = {0};
		cin>>m;
		k = m;
		while(m--){
			cin>>b;
			a[b]++;
		}
		max = 0;
		for(i=1;i<101;i++){
			// cout<<a[i]<<" ";
			if(a[i]>max)
				max = a[i];
		}
		cout<<k - max<<endl;
	}
	return 0;
}