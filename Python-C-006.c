/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

#Length of strval is always Less than or equal to 100
strval=input().strip() #x is always less than Y
X, Y =[int(val) for val in input().split())
print(strval[:X])
print(strval(X:Y]) 
print(strval[-Y:])
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main()
{
	char s[100]; 
	scanf("%s",s); 
	int x,y; 
	scanf("%d %d", &x, &y); 
	for(int i=0;i<x;i++)
	{ 
		printf("%c",s[i]); 
	}
	printf("\n"); 
	for (int i=x;i<y;i++)
	{ 
		printf("%c",s[i]); 
	}
	printf("\n");
	for (int i=(strlen(s)-y); i<strlen(s); i++)
	{ 
		printf("%c",s[i]); 
	}
}