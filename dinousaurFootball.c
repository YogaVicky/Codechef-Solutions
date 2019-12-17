#include <stdio.h>
int main()
 {
    int t;
    scanf("%d",&t);

    int i;
    for(i=0;i<t;i++)
     {
         int n,k,x;
         scanf("%d",&n);
         scanf("%d",&k);

         for(x=n-k;x<=n;x++){
         printf("%d ",x);
        }
         for(x=1;x<n-k;x++){
         printf("%d ",x);
         }
         printf("\n");
     }
	return 0;
}
