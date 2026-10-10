#include<stdio.h>
int main()
{
	int n,i,sum,res;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("\n Number from 1 to %d:",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	res=1;
	i=1;
	do
	{
		res=res*i;
		i++;
	}while(i<=n);
	printf("\n Sum of the number=%d",sum);
	printf("\n Factorial of %d=%d",n,res);
}
