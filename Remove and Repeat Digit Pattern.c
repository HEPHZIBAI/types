/*
The program must accept an integer N as the input. For each digit D in N, the program must print the digit D for X times where X is formed by removing the digit D from the integer N as the output.

Note: The value of N is always not a multiple of 100.

Boundary Condition(s): 
	101 <= N< 10^5

Input Format: 
	The first line contains N.

Output Format: 
	The lines contain the integers separated by a space.

Example Input/Output 1:
	Input
		121
	Output
		111111111111111111111
		22222222222
		111111111111

Explanation
	For the first digit in 121, the value of X is 21. So 1 is printed for 21 times. For the second digit in 121, the value of X is 11. So 2 is printed for 11 times. For the third digit in 121, the value of X is 12. So 1 is printed for 12 times.

Example Input/Output 2:
	Input: 
		210
	Output:
		2222222222
		11111111111111111111 
		000000000000000000000

*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int a[1000000];
	int k=0; 
	while(n>0)
	{
		a[k]=n%10; 
		n/=10; 
		k++;
	}
	int m=k-1;
	k--; 
	int f;
	while(m>=0)
	{
		f=0; 
		for (int i=k;i>=0; i--)
		{
			if(i!=m) 
			f=(f*10)+a[i];
		}
		for (int i=0;i<f;i++) 
		printf("%d ",a[m]); 
		printf("\n");
		m--;
	}
}