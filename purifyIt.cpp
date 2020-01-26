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
				if(s[i+2]!='\0' && s[i+2] == '0'){
					s.replace(i+1,i+2,"");
					count1++;
				}
				else if(s[i+2]!='\0' && s[i+2] == '1'){
					s.replace(i,i+1,"");
					count1++;
				}
				else
					count1++;
			}
			else if(s[i]=='1' && s[i+1]=='0'){
				if(s[i+2]!='\0' && s[i+2] == '1'){
					s.replace(i+1,i+2,"");
					count2++;
				}
				else if(s[i+2]!='\0' && s[i+2] == '0'){
					s.replace(i,i+1,"");
					count2++;
				}
				else
					count2++;		
			}
		}
		cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}