#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,i,count=0,j,k,c;
		cin>>n>>m;
		set<ll>a,b;
		for(i=0;i<n;i++){
			cin>>c;
			a.insert(c);
		}
		for(i=0;i<m;i++){
			cin>>c;
			b.insert(c);
		}
		for(auto it=a.begin();it!=a.end();it++){
			auto temp = it;
			temp++;
			for(auto it1=temp;it1!=a.end();it1++){
				for(auto it2=b.begin();it2!=b.end();it2++){
					// cout<<*it<<" "<<*it1<<" "<<*it2<<endl;
					if(pow(*it-*it1,2)==pow(*it,2) + pow(*it1,2) + pow(*it2,2) + pow(*it2,2)){
						count++;
					}
				}
			}
		}
		for(auto it=b.begin();it!=b.end();it++){
			auto temp = it;
			temp++;
			for(auto it1=temp;it1!=b.end();it1++){
				for(auto it2=a.begin();it2!=a.end();it2++){
					if(pow(*it-*it1,2)==pow(*it,2) + pow(*it1,2) + pow(*it2,2) + pow(*it2,2)){
						count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
