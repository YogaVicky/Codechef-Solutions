#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
void solve(){
	ll n, q;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0;i<10000;i++);for(int i = 0;i<10000;i++);
		for(int i = 0;i<10000;i++);
			for(int i = 0;i<10000;i++);
				for(int i = 0;i<10000;i++);
	for(int i = 0; i<n;i++) cin >> a[i];
	sort(a.begin(), a.end());
	cin >> q;
	while(q--)
	{
		ll x1, y1, fl = 0, an = 0;
		cin >> x1 >> y1;
		if(binary_search(a.begin(), a.end(), (x1+y1))) fl = 1;
		an = lower_bound(a.begin(), a.end(),(x1+y1))-a.begin();
		if(fl == 1)
			cout << -1 << endl; 
		else 
			cout << an << endl;
	}
    return ;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}