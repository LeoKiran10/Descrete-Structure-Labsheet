#include<stdio.h>
int main()
{
	char table[8][8];
	int i,j;
	table[0][0]=table[1][0]=table[2][0]=table[3][0]='T';
	table[4][0]=table[5][0]=table[6][0]=table[7][0]='F';
	table[0][4]=table[1][1]=table[4][1]=table[5][1]='T';
	table[2][1]=table[3][1]=table[6][1]=table[7][1]='F';
	table[0][2]=table[2][2]=table[4][2]=table[6][2]='T';
	table[1][2]=table[3][2]=table[5][2]=table[7][2]='F';
	for(i=0;i<8;i++)

{
if(table[i][0]=='T'&&table[i][1]=='F')
table[i][3]='F';
else
table[i][3]='T';	
}
for(i=0;i<8;i++)
{
	if(table[i][1]=='T'&&table[i][2]=='F')
	table[i][4]='F';
	else
	table[i][4]='T';
}
for(i=0;i<8;i++)
{
	if(table[i][3]=='T'&&table[i][4]=='T')
	table[i][5]='T';
	else
	table[i][5]='F';
}
for(i=0;i<8;i++)
{
	if(table[i][0]=='T'&&table[i][3]=='F')
	table[i][6]='F';
	else
	table[i][6]='T';
}
for(i=0;i<8;i++)
{
	if(table[i][5]=='T'&&table[i][6]=='F')
	table[i][7]='F';
	else
	table[i][7]='T';
}
printf("P\t\tQ\t\tR\t\tP->Q\t\tQ->R\t(P->Q)^(Q->R)\t\tP->R\t(P->Q)^(Q->R)->(P->R)\n");
for(i=0;i<8;i++)
{
	for(j=0;j<8;j++)
    printf("%c\t\t",table[i][j]);
    printf("\n");
}
for(i=0;i<8;i++)
{
	if(table[i][7]=='T')
	break;
}
if(i==9)
printf("The argument is not valid.");
else
printf("The argument is valid.");
}
