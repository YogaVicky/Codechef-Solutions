#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
	    char a[100005],b[100005];
	    scanf("%s %s",a,b);
	    long int i,j,k;
	    for(i=0;a[i]!='\0';i++)
	    {
	        if(a[i]!=b[i])break;
	    }                                                   //to see if a==b or not
	    if(b[0]=='0'&&strlen(b)==1)printf("0\n");
	    //else if(a[0]=='0'&&strlen(a)==1)printf("1\n");
	    //else if(strlen(a)==strlen(b)&&a[i]=='\0')printf("2\n");
	    else
	    {
	        if(strlen(a)>strlen(b))
	        {
	            j=strlen(a)-strlen(b);
	            for(i=strlen(b)+j;i>=0;i--)
	            {
	                if(i<j)b[i]='0';
	                else b[i]=b[i-j];
	            }
	        }
	        else if(strlen(b)>strlen(a))
	        {
	            j=strlen(b)-strlen(a);
	            for(i=strlen(a)+j;i>=0;i--)
	            {
	                if(i<j)a[i]='0';
	                else a[i]=a[i-j];
	            }
	        }                                               //to add 0s to left if strings are unequal
	        j=strlen(a);
	        //for(i=0,k=0;i<j;i++)
	        //{
	          //  if((a[i]-48)&&(b[i]-48))k=1;
	        //}
	       //if(k==0)printf("1\n");
	       //else
	       //{
	           for(i=strlen(a)-1,k=0,j=0;i>=0;i--)
	           {
	               if((a[i]-48)&(b[i]-48))
	               {
	                   if(j>k)k=j;
	                   j=1;
	               }
	               else if((a[i]-48)^(b[i]-48)&&j)j++;
	               else
	               {
	                   if(j>k)k=j;
	                   j=0;
	               }
	           }if(j>k)k=j;
	           //        j=0;
	           //if(k>0)
	           printf("%ld\n",k+1);
	           //else printf("2\n");
	       //}
	    }
	}
	return 0;
}