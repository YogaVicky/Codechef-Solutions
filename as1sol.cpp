#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
     
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll k=upper_bound(a.begin(),a.end(),2*a[i])-a.begin();
            if(k!=i+1)
                sum+=k-i-1;
        }
        cout<<sum<<"\n";
    }
        
    return 0;
}