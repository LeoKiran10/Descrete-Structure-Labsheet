#include<stdio.h>
#define size 4
int main()
{
	int i;
	long int x,y;
	int a[size],b[size],sum[size];
	int m[size]={99,98,97,95};
	printf("Enter two large no:");
	scanf("%d %d",&x,&y);
	for(i=0;i<size;i++)
	{
		a[i]=x%m[i];
		b[i]=y%m[i];
	}
	printf("the set respresenting %d and %d under mod by(99,98,97,95)are\n",x,y);
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<size;i++)
	{
		sum[i]=(a[i]=b[i])%m[i];
	}
	printf("The sum is \n");
	for(i=0;i<size;i++)
	printf("%d\t",sum[i]);
	return 0;
}
