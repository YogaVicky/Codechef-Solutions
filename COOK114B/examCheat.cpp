#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a>b){
			a = a+b;
			b = a - b;
			a = a - b;
		}
		if(a==b){
			cout<<-1<<endl;
			continue;
		}
		else
			cout<<countDivisors(b-a)<<endl;
	}
	return 0;
}