/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
	1 <= N <= 100

Input Format: 
	The first line contains N.

Output Format:
	The first N lines contain the desired pattern as shown in the Example Input/Outputsection.

Example Input/Output 1:
	Input:
		5
	Output:
		1
		12
		123
		1222
		11111

Example Input/Output 2:
	Input:
		10
	Output
		1
		12
		123
		1234
		12345
		123455
		1234444
		12333333
		122222222
		1111111111
*/



#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n); 
	if(n%2==0)
	{
		for (int i=1;i<=(n/2);i++)
		{
			for(int j=1;j<=i;j++) 
				printf("%d ",j); 
			printf("\n");
		}
		int u=n/2;
		for (int i=0;i<u;i++)
		{
			int j;
			for (j=1;j<=u-i;j++) 
				printf("%d ",J);
			j--;
			for (int k=0;k<=i;k++) 
				printf("%d ",j); 
			printf("\n");
	}
	else
	{
		for(int i=1;i<(n/2)+2;i++)
		{
			for(int j=1;j<i;j++) 
				printf("%d ",j); 
			printf("\n");
		}
		for (int i=0;i<u;i++)
		{
			int j;
			for (j=1;j<=u-i;j++) 
				printf("%d ",J);
			j--;
			for (int k=0;k<=i;k++) 
				printf("%d ",j); 
			printf("\n");
		}
	}
}