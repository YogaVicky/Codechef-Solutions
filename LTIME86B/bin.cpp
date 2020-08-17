#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
string decToBinary(ll n) 
{ 
    ll binaryNum[32]; 
    ll i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
	string s;
    for (ll j = i - 1; j >= 0; j--) 
		{if(binaryNum[j]) s+='1'; else s+='0';}
	return s;
}
ll binaryToDecimal(string n) 
{ 
    string num = n; 
    ll dec_value = 0; 
    ll base = 1; 
    ll len = num.length(); 
    for (ll i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    }
    return dec_value; 
}
ll bincon(ll x, ll y) {
	ll ans = 0;
	string binX = decToBinary(x);
	string binY = decToBinary(y);
	string binXplusY = binX + binY;
    string binYplusX = binY + binX;
	ll XplusY = binaryToDecimal(binXplusY);
	ll YplusX = binaryToDecimal(binYplusX);
	ans = XplusY - YplusX;
	return ans;
}
void solve()
{
	ll n, ans = 0,i,j;
	cin >> n;
	vector<ll>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			ans = max(ans, bincon(a[i],a[j]));
		}
	}
	cout << ans << endl;
    return ;
}
int main(){
	ll t;
	for(t=0;t<10000;t++);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}