#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll solve3(ll x)
{
    ll ans = 0;
    while (x % 2 == 0)
    {
        ans++;
        x /= 2;
    }
    return ans;
}
ll solve(ll x)
{
    ll ans = 0;
    while (x % 2 == 0)
    {
        ans++;
        x /= 2;
    }
    return ans;
}

ll t, ts, maxPossible, ans, primeFact;

int main()
{
    
    // ll t;
		ll g;
	for(g=0;g<10000;g++);
    cin >> t;

    // ll ts = 0, maxPossible = 0, ans = 0, primeFact;
    while (t--)
    {
        cin >> ts;

        if (ts % 2 != 0)
            cout << ts / 2 << endl;
        else
        {
            primeFact = solve3(ts);
            maxPossible = pow(2, primeFact + 1);

            ans = ts / maxPossible;
            cout << ans << endl;
        }
    }

    return 0;
}





