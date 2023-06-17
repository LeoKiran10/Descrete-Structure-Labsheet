#include<stdio.h>
int joint(int a[2][2],int  b[2][2]);
int meet(int a[2][2],int  b[2][2]);
int product(int a[2][2],int  b[2][2]);
int main()
{
	int a[2][2], b[2][2],i,j;
	printf("Enter the elements of matrix a:\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	
		{
			printf("Enter value for a[%d][%d]:", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix b:\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value for b[%d][%d]:", i, j);
			scanf("%d",&b[i][j]);
		}
	}
	joint(a,b);
	meet(a,b);
	product(a,b);
	return 0;
	
	
}
int joint(int a[2][2], int b[2][2])
{
	int sum[2][2],i,j;
	printf("The value of join of two matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]||b[i][j];
			printf("[%d]\n",sum[i][j]);
		}
    }	
}

int meet(int a[2][2],int  b[2][2])
{
	int mul[2][2],i,j;
	printf("The value of meet of two matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=(a[i][j]&&b[i][j]);
			printf(" [%d]\n",mul[i][j]);
		}
    }	
}

int product(int a[2][2],int  b[2][2])
{
	int pro[2][2],k,i,j;
	printf("The value of projuct of two matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			 pro[i][j] += a[i][k]*b[k][j];	
			}
			printf("[%d]\n",pro[i][j]);
		}
	}
	
}
