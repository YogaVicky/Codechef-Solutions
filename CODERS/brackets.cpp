#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll tc = 1;
	cin >> tc;
	while (tc--)
	{
		string str;
	cin >> str;
	ll query,n,x, index1 = -1, flag = -1;
	n = str.size();
	vl res(n+1);
	res[n] = 0;
	stack<pcl> a;
	a.push({str[n-1], n});
	for(int i = n-2;i>=0;i--)
	{
		if(str[i]=='(')
		{
			if(a.empty())
			{
				flag = -1;
				res[i+1] = flag;
				continue;
			}
			pcl b;
			b = a.top();
			if(b.f!=')')
			{
				a.push({str[i], i+1});
				flag = -1;
				res[i+1] = flag;
			}			
			else
			{
				flag = b.s;
				res[i+1] = flag;
				a.pop();	
			}
		}
		else
		{
			res[i+1] = flag;
			a.push({str[i], i+1});
		}
	}
	cin >> query;
	while(query--)
		cin >> index1, cout << res[index1] << endl;
	}
	return 0;
}