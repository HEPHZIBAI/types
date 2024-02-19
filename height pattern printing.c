/*
The height of N cats is passed as the input. The program must print the height of the cats graphically as a column chart represented by #and- as shown in the Example Input/Output section.

Boundary Condition(s): 2 <= N <= 100

1 <= Height of each cat <= 100

Input Format:

The first line contains N The second line contains N integers representing the height of N cats separated by a

space

Output Format:

The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input
		6
		10 4 2 6 7 2
	Output:
		# - - - - -
		# - - - - - 
		# - - - - - 
		# - - - # -
		# - - # # -
		# - - # # -
		# # - # # -
		# # - # # -
		# # # # # # 
		# # # # # #

Example Input/Output 2: 
	Input:
		10
		1 2 3 4 5 6 7 8 9 10
	Output:
		- - - - - - - - - #
		- - - - - - - - # #
		- - - - - - - # # #
		- - - - - - - # # #
		- - - - - - # # # #
		- - - - - # # # # #
		- - - - # # # # # #
		- - - # # # # # # #
		- - # # # # # # # #
		- # # # # # # # # #
		# # # # # # # # # #
*/



//answer



#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);	
	int a[n];
	int l=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(l<a[i])
			l=a[i];
	}
	int u[l][n]; 
	for (int i=0;i<l;i++)
	{
		for (int j=0;j<n;j++) 
			u[i][j]=0;
	}
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<a[i];j++)
			u[l-j-1][i]=1;
	}
	for (int i=0;i<l;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(u[i][j]==1)
				printf("# ");
			else
				print("- ");
		}
		printf("/n");
	}
}