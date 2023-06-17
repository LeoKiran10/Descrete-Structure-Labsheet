 #include<stdio.h>
int power(int x, int y);
int powerwithmod(int b, int y);
int main()
{
	int x,y,a,b,m,c,d;
	printf("Enter the value of x \n");
	scanf("%d",&x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("Enter the value of m \n");
	scanf("%d",&m);
	a= power(x,y);
	c= powerwithmod(b,y);
	d=c%m;
	
	printf("The value of the x power y is %d",a);
	printf("\nThe value of the b power y mod m is %d",d);
	
}
int power(int x, int y)
{
	if(y==0)
	{
		return 1;
		
	}
	else if(x==0)
	{
		return 0;
	}
	else
	{
		return x*power(x,y-1);
		
	}
}
int powerwithmod(int x, int y)
{
	if(y==0)
	{
		return 1;
		
	}
	else if(x==0)
	{
		return 0;
	}
	else
	{
		return x*power(x,y-1);
		
	}
}
