/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

numbers [int(val)X2 for val in input().split()) 
print(sum(numbers))
*/


//answer



#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int n;
	int c=0; 
	while(scanf("%d",&n)>0)
	{
		if(n%2!=0) 
		c++;
	}	
	printf("%d",c);
}