#include<iostream>
using namespace std;
#include<stdio.h>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
int main()
{
	long int T,N,sum=0;
	cin>>T;
	while(T--)
	{
		cin>>N;
		sum=0;
		vector <int> A(N,0);
		vector <int> B(N,0);
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<N;i++)
		{
			cin>>B[i];
		}
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
		for(int i=0;i<N;i++)
		{
			if(A[i]<B[i])
				sum+=A[i];
			else
				sum+=B[i];
		}
	cout<<sum<<endl;
	}
	return 0;
}