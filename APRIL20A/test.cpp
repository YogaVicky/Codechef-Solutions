#include <bits/stdc++.h> 
using namespace std; 
#define llint long long 
#define pb push_back 
llint Sum(llint arr[], llint n, llint sum) 
{ 
    unordered_map<llint, llint> prevSum; 
  
    llint res = 0; 
   
    llint currsum = 0; 
  
    for (llint i = 0; i < n; i++) { 
  
        // Add current element to sum so far. 
        currsum += arr[i]; 
  
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if (currsum == sum)  
            res++;         
  
        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
  
        // Add currsum value to count of  
        // different values of sum. 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
llint power(llint a){
	if(a==0)
		return 2;
	llint power=0;
	while(a%2==0){
		power++;
		a/=2;
	}
	return power;
}
int main(){
	llint t;
	cin>>t;
	while(t--){
		llint n,i;
		cin>>n;
		llint a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		llint b[n];
		for(i=0;i<n;i++){
			b[i] = power(a[i]);
		}
		llint count = Sum(b,n,1);
		cout<<(n*(n+1))/2 - count<<endl;
	}
	return 0;
}