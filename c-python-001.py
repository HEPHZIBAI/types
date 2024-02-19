'''
Please convert the following C code to Python so that the Python program executes successfully passing the test cases.

#include <stdio.h> 
#include <stdlib.h>
int main()
{
	char str[101]; 
	int len, X;
	scanf("%s%n\n%d", str, &len, &X);
	printf(str+len-X); 
	return 0;
}
'''


#answer



a=input()
b=int(input())
print(a[len(a)-b::])