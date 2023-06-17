#include<stdio.h>
int m,n,i,j,k;
void intersection(int a[],int b[])
{
	int k=0;	
	printf("\nA n B=");	
	for(i=0;i<m;i++)
	{		
	for(j=0;j<n;j++)	
	{			
	if(a[i]==b[j])		
	{			
	k++;				
	printf("%d",a[i]);			
	}		
	}	
	}	
	if(k==0)	
	printf(" ");
	}
	void union1 (int a[],int b[])
	{	
	printf("\nA U B=");	
	for(i=0;i<m;i++)	
	{		
	printf("%d",a[i]);	
	}	
	for(i=0;i<n;i++)	
	{		
	k=0;		
	for(j=0;j<m;j++)		
	{			
	if(b[i]==a[j])			
	{				
	break;			
	}			
	k++;		
	}		
	if(k=m)		
	printf("%d",b[i]);	
	}	
	printf(" ");
	}
	void difference (int a[],int b[])
	{	
	printf("\nA-B=");	
	for(i=0;i<m;i++)	
	{		
	k=0;		
	for(j=0;j<n;j++)		
	{			
	if(a[i]==b[j])			
	k++;		
	}		
	if(k==0)		
	{			
	printf("%d",a[i]);		
	}	
	}	
	printf("\n 	B-A=");	
	for(i=0;i<m;i++)	
	{		
	k=0;		
	for(i=0;i<n;i++)		
	{			
	if(b[i]==a[j])			
	k++;		
	}		        
	if (k==0)		
	{			
	printf("%d",b[i]);		
	}	
	}	
	printf("\n");
	}
	void cartesian(int a[],int b[])
	{
	printf("Cartesian product");
	for(i=0;i<m;i++)
	{	
	for(j=0;j<n;j++)	
	{		
	printf("%d %d",a[i],b[j]);	
	}
	}
	}
	int main()
	{	
	printf("Enter the size of first set:n(A)=");	
	scanf("%d",&m);	
	printf("Enter the size of second set:n(B)=");	
	scanf("%d",&n);
	int a[m],b[n];	
	printf("Enter the element of your first set A/n");	
	for(i=0;i<m;i++)	
	{		
	printf("A[%d]=",i+1);		
	scanf("%d",&a[i]);	
	}	
	printf("Enter the element of your second set B/n");	
	for(i=0;i<n;i++)	
	{	
	printf("B[%d]=",i+1);	
	scanf("%d",&b[i]);
	}
	intersection(a,b);
	union1(a,b);
	difference(a,b);
	cartesian (a,b);
    return 0;
	}
