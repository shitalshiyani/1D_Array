#include<stdio.h>

main()
{
	int i,n,a[100],sum=0,avg;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		sum=sum+a[i];
	}
	    printf("\nSum of Array=%d",sum);
	    avg=sum/n;
	    printf("\nAverage of Array=%d",avg);
	
	
	    
	    printf("\n");
}
