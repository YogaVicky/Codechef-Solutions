#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define mp make_pair
ll t, n, a, b;

void solve(){
    cin >> n;

        ll ans[n][n];
        a = 1, b = 2;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
            {
                if ((i + j) & 1)
                {
                    ans[i][j] = b;
                    b += 2;
                }
                else
                {
                    ans[i][j] = a;
                    a += 2;
                }
            }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
}


void solve2(){
    cin >> n;

        ll ans[n][n];
        a = 1, b = 2;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
            {
                if ((i + j) & 1)
                {
                    ans[i][j] = b;
                    b += 2;
                }
                else
                {
                    ans[i][j] = a;
                    a += 2;
                }
            }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
}


int main()
{
    // ll t;
    for(t=0;t<10000;t++);
    cin >> t;

    while (t--)
    {
        solve2();
    }
    return 0;
}