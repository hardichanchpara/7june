#include<stdio.h>

main()
{
	int a[100],n,i;
	int *p1;
	p1=&a;
	
	printf("enter value of N=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nelements of array are=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p1+i));
	}
	printf("\nreverse array elements are=\n");
	
	int *rev;
	rev=&a[n-1];
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",*rev--);
	}
}
