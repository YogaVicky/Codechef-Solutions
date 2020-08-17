#include<bits/stdc++.h>
#define llint long long int
#define pb push_back
using namespace std;
int main(){
	llint t;
	cin>>t;
	while(t--){
		llint count = 0;
		llint x,k;
		cin>>x>>k;
		while(x%2==0){  
	        count++; 
	        x/=2;  
	    }
	    for(int i =0;i<100;i++);    
    	for(llint i=3;i<=sqrt(x);i=i+2){ 
        	while(x%i==0){  
            	count++;  
            	x/=i;  
        	}  
    	}    
    	if(x>2)  
        	count++;
        if(count>=k)
        	cout<<"1"<<endl;
        else
        	cout<<"0"<<endl;
	}
	return 0;
}