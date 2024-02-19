/*
The program must accept an odd integer N as the input. The program must print the desired pattern as shown in Example Input/Output section.
Hint: Use underscore to print the first line of the desired pattern.

Boundary Condition(s): 
	3 <= N < 99

Input Format: 
	The first line contains N.

Output Format:
	The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		3
	Output:
		___
		\**/
		*\/

Example Input/Output 2:
	Input:
		5
	Output:
		_____
		\****/
		*\**/
		**\/
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		printf("_");
	printf("\n");
	int y=n-1;
	for(int i=0;i<n-1 && y>=0;i++)
	{
		for(int j=0;j<i;j++)
			printf("*");
		printf("\\");
		for(int j=0;j<y;j++)
			printf("-");
		printf("/");
		printf("\n");
		y-=2;
	}
}