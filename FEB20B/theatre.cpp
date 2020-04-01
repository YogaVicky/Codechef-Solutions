#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	ll sum1=0;
	while(t--){
		char a;
		ll t,i,b,n,j,k,l;
		ll v[4][4] = {0};
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a>>b;
			if(a=='A'){
				if(b==12)
					v[0][0]++;
				if(b==3)
					v[0][1]++;
				if(b==6)
					v[0][2]++;
				if(b==9)
					v[0][3]++;
			}
			if(a=='B'){
				if(b==12)
					v[1][0]++;
				if(b==3)
					v[1][1]++;
				if(b==6)
					v[1][2]++;
				if(b==9)
					v[1][3]++;
			}
			if(a=='C'){
				if(b==12)
					v[2][0]++;
				if(b==3)
					v[2][1]++;
				if(b==6)
					v[2][2]++;
				if(b==9)
					v[2][3]++;
			}
			if(a=='D'){
				if(b==12)
					v[3][0]++;
				if(b==3)
					v[3][1]++;
				if(b==6)
					v[3][2]++;
				if(b==9)
					v[3][3]++;
			}
		}
		// for(i=0;i<4;i++){
		// 	for(j=0;j<4;j++){
		// 		cout<<v[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// vector<ll>max(4);
		// for(i=0;i<4;i++){
		// 	ll temp = 0;
		// 	for(j=0;j<4;j++){
		// 		if(temp<v[j][i])
		// 			temp = v[i][j];
		// 	}
		// 	max.pb(temp);
		// }
		// sort(max.begin(),max.end());
		// for(i=0;i<4;i++)
		// 	cout<<max[i]<<" ";
		// cout<<endl;
		ll max = -400,r,sum=0,c,temp;
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(j!=i){
					for(k=0;k<4;k++){
						if(k!=i && k!=j){
							for(l=0;l<4;l++){
								if(l!=i && l!=j && l!=k){
									temp = 0;
									vector<ll>s(4);
									s[0] = v[0][i];
									s[1] = v[1][j];
									s[2] = v[2][k];
									s[3] = v[3][l];
									sort(s.begin(),s.end());
									if(s[3]!=0)
										temp+=s[3]*100;
									else
										temp+=-100;
									if(s[2]!=0)
										temp+=s[2]*75;
									else
										temp+=-100;
									if(s[1]!=0)
										temp+=s[1]*50;
									else
										temp+=-100;
									if(s[0]!=0)
										temp+=s[0]*25;
									else
										temp+=-100;
									// for(auto it = 0;it<4;it++)
									// 	cout<<s[it]<<" ";
									// cout<<endl;
									if(temp>max){
										// cout<<s[3]<<" "<<s[2]<<" "<<s[1]<<" "<<s[0]<<" "<<endl;
										// cout<<s[3]*100+s[2]*75+s[1]*50+s[0]*25<<endl;
										// cout<<temp<<endl;
										// cout<<"Change"<<endl;
										// for(auto it = 0;it<4;it++)
										// cout<<s[it]<<" ";
										// cout<<endl;
										max = temp;
									}
								}
							}
						}
					}
				}
			}
		}
		sum = max;
		cout<<sum<<endl;
		sum1+=sum;
		// for(i=0;i<4;i++){
		// 	for(j=0;j<4;j++){
		// 		if(max<=v[i][j]){
		// 			max = v[i][j];
		// 			r = i;
		// 			c = j;
		// 		}
		// 	}
		// }
		// for(i=0;i<4;i++)
		// 	v[r][i] = 0;
		// for(i=0;i<4;i++)
		// 	v[i][c] = 0;
		// // cout<<max<<endl;
		// if(max!=0)
		// 	sum+=max*100;
		// else
		// 	sum+=-100;
		// max = 0;
		// for(i=0;i<4;i++){
		// 	for(j=0;j<4;j++){
		// 		if(max<=v[i][j]){
		// 			max = v[i][j];
		// 			r = i;
		// 			c = j;
		// 		}
		// 	}
		// }
		// for(i=0;i<4;i++)
		// 	v[r][i] = 0;
		// for(i=0;i<4;i++)
		// 	v[i][c] = 0;
		// // cout<<max<<endl;
		// if(max!=0)
		// 	sum+=max*75;
		// else
		// 	sum+=-100;
		// max = 0;
		// for(i=0;i<4;i++){
		// 	for(j=0;j<4;j++){
		// 		if(max<=v[i][j]){
		// 			max = v[i][j];
		// 			r = i;
		// 			c = j;
		// 		}
		// 	}
		// }
		// for(i=0;i<4;i++)
		// 	v[r][i] = 0;
		// for(i=0;i<4;i++)
		// 	v[i][c] = 0;
		// // cout<<max<<endl;
		// if(max!=0)
		// 	sum+=max*50;
		// else
		// 	sum+=-100;
		// max = 0;
		// for(i=0;i<4;i++){
		// 	for(j=0;j<4;j++){
		// 		if(max<=v[i][j]){
		// 			max = v[i][j];
		// 			r = i;
		// 			c = j;
		// 		}
		// 	}
		// }
		// for(i=0;i<4;i++)
		// 	v[r][i] = 0;
		// for(i=0;i<4;i++)
		// 	v[i][c] = 0;
		// // cout<<max<<endl;
		// if(max!=0)
		// 	sum+=max*25;
		// else
		// 	sum+=-100;
		// cout<<sum<<endl;
		// sum1+=sum;
	}
	cout<<sum1<<endl;
	return 0;
}