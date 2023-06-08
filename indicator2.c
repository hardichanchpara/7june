#include<stdio.h>

main()
{
    int a[]={1,3,5,7,9},i;
    int *p1;
    int b[5],ans;
    int *p2;
    p1=a;
   
    for(i=0;i<=4;i++)
    {
    	printf("%u => %d\n",p1+i,*(p1+i));
    }
    printf("all elements suqare :-\n");
    for(i=0;i<=4;i++)
    {
    	ans=*(p1+i)*(*(p1+i));
    	b[i]=ans;
	}
	p2=b;
    for(i=0;i<=4;i++)
    {
    	printf("%u => %d\n",p2+i,*(p2+i));
    }
}

