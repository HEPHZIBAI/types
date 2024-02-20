/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

def isEven(num): 
	return num%2 == 0

numList = list(map(int, input().split())) 
print(*list(filter(isEven, numList)))

*/

#include<stdio.h>

int isEven(int num)
{
	return num % 2 == 0;
}

int main()
{
	int num; 
	while(scanf("%d", &num) != EOF)
	{ 
		if (isEven(num)) 
		{ 
			printf("%d ", num);
		}
	}
	return 0;
}