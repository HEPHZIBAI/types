'''
Please convert the following C code to Python so that the Python program executes successfully passing the test cases,

#include <stdio.h> 
#include <stdlib.h>
int main()
{
	char str[101], format[3]="%", specifier[]= "dc"; 
	scanf("%s", str); 
	format[2]='\0'
	for(int index=0; index<str[index] !='\0'; index++)
	{
		format[1]= specifier[index%2]; 
		printf(format, str[index]);
	}
	return 0;
}
'''


//answer




s=input()
for i in range(len(s)):
	if (i+1)%2==1:
		print (ord(s[i]), end="")
	else:
		print(s[i], end="")