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
        if(n%2==0){
            cout<<5<<"\n";
            cout<<n/2<<" "<<n/2<<"\n";
        }
        else
            cout<<4<<"\n";
        cout<<0<<" "<<0<<"\n";
        cout<<0<<" "<<n<<"\n";
        cout<<n<<" "<<0<<"\n";
        cout<<n<<" "<<n<<"\n";
    }
        
    return 0;
}