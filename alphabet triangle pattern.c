/*
The program must accept an alphabet CH as the input. The program must print the desired pattern as shown in the Example Input/Output section.
Input Format:
	The first line contains the alphabet CH.
Output Format:
	The lines containing the desired pattern as shown in the Example Input/Output
section.
Example Input/Output 1:
	Input:
		F
	Output:
		A
		BB
		CCC
		DDDD
		EEEEE
		FFFFFF
Example Input/Output 2:
	Input
		g
	Output
		A
		BB
		CCC
		DDDD
		EEEEE
		FFFFFF
		GGGGGGG
*/



//ANSWER

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	scanf("%c",&a); 
	a=toupper(a);
	for (char i='A';i<=a;i++)
	{
		for (char j='A';j<=i;j++)
			printf("%c",1);
		printf("\n")
	}
}