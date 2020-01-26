#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,check,n,i,m,j;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[1003][1003],b[1003][1003];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cin>>a[i][j];
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(i==0)
					b[i][j]=1;
				else{
					if(j==0){
						if(a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j+1])
							b[i][j]=1;
						else
							b[i][j]=0;
					}
					else if(j==m-1){
						if(a[i][j]>a[i-1][j-1]&&a[i][j]>a[i-1][j])
							b[i][j]=1;
						else
							b[i][j]=0;
					}
					else{
						if(a[i][j]>a[i-1][j]&&a[i][j]>a[i-1][j+1]&&a[i][j]>a[i-1][j-1])
							b[i][j]=1;
						else
							b[i][j]=0;
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				cout<<b[i][j];
			cout<<endl;
		}
	}
	return 0;
}