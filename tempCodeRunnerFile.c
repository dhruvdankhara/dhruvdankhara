#include<stdio.h>

void main()
{
	int num,N,cube,rev,sum=0;
	printf("enter number=");
	scanf("%d",&num);
	for(N=num; num != 0; num /= 10)
	{
		rev=num%10;
		cube=rev*rev*rev;
		sum=sum+cube;
	}
	
	
	if (sum==N)
	{
		printf("this number is armstrong");
	}
	else
	{
		printf("not armstrong nnumber");
	}

return 0;
}
