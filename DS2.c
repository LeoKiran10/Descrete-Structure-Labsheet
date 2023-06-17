#include<stdio.h>
#include<math.h>
int main()
{
	double num=8.33;
	int ceilfunc,floorfunc;
	ceilfunc=ceil(num);
	floorfunc=floor(num);
	printf("Ceiling of %2f=%d\n",num,ceilfunc);
	printf("Floor of %2f=%d",num,floorfunc);
	return 0;
}
