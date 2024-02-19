/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
	1 <= N <= 50
Input Format:
	The first line contains N.
Output Format:
	The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		3
	Output:
		123+321
		123+321
		123+321
		+++++++
		123+321
		123+321
		123+321
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int h=1;
	while(h<3)	
	{
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d ",j);
			}
			printf("+ ");
			
			for(int j=n;j>=1;j--)
			{
				printf("%d ",j);
			}
			printf("\n");
		}
		if(h!=2)
		{
			for(int i=0;i<n+n+1;i++)
			{
				printf("+ ");
			}
			printf("\n");
		}
		h+=1;
	}
}