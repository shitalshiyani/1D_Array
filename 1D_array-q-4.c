#include<stdio.h>

main()
{
	int i,n,a[100],b[100],sum[100];
	printf("Enter Value of N=");
	scanf("%d",&n);
	
	printf("Enter A array value=");
	for (i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("Enter B array value=");
	for (i=0;i<n;i++)
	{
		printf("b[%d]",i);
		scanf("%d",&b[i]);
    }
    printf("Addition of Array values=\n");
	for (i=0;i<n;i++)
	{
         sum[i]=a[i]+b[i];
         printf("sum[%d]=%d\n",i,sum[i]);
	}
	
	printf("\n");
	
}
