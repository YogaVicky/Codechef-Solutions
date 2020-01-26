#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<set>
using namespace std;
int main(){
	int t , n, d , sum1 , sum2;
	string s1 , s2;
	cin>>t;
	while(t--){
		cin>>n>>d;
		cin>>s1;
		n--;
		sum1 = 1;
		sum2 = 1;
		while(n--){
			cin>>s2;
			if(s2!=s1){
				sum2++;
				if(sum2>sum1)
					sum1 = sum2;
			}
			else
				sum2 = 1;
		}
		if(sum1 < d)
			cout<<sum1<<endl;
		else
			cout<<d<<endl;
	}
	return 0;
}