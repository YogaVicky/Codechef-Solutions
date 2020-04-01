#include<iostream>
using namespace std;
#include<stdio.h>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
int main()
{
	int T,N,K;

	cin>>T;
	while(T--)
	{
		cin>>N;cin>>K;
		int A[100000],B[100000],C[100000],i,j;
		for(i=0;i<N;i++)
		{
			cin>>A[i];
			B[i]=A[i]%K;//remove
			if(B[i]==0)
				C[i]=0;
			else
				C[i]=K-B[i];//Add
		}
		int count=0;
		for(i=0,j=N-1;i<N;)
		{
			count+=B[i];
			while(count>=C[j] && i<j)
				{count-=C[j];j--;}
			i++;
			if(i>j)
				break;
		}
		cout<<count<<endl;
	}
	return 0;
}