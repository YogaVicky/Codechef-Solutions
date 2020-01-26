#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , i;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		int count = 0;
		int count1 = 0 , count2 = 0;
		for(i=0;s[i+1]!='\0';i++){
			if(s[i]=='0' && s[i+1]=='1'){
					count1++;
			}
		}
		for(i=0;s[i+1]!='\0';i++){
			if(s[i]=='1' && s[i+1]=='0'){
					count2++;
			}
		}
		if(count1>count2 && count1>1){
			for(i=0;s[i+1]!='\0';i++){
				if(s[i]=='0' && s[i+1]=='1'){
					s.replace(i,i+1,"");
				}
				if(count1==1)
					break;		
			}
		}
		else if(count1<count2 && count2>1){
			for(i=0;s[i+1]!='\0';i++){
				if(s[i]=='1' && s[i+1]=='0'){
					s.replace(i+1,i+2,"");
				}
				if(count2==1)
					break;		
			}
		}
		
	}
	return 0;
}