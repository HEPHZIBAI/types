'''
Please convert the following C code to Python so that the python program executes successfully passing the test cases.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int len;
	char str[101]; // Length of str is always greater than 1 
	scanf("%s%n", str, &len); 
	printf("%c", str[len%2]); 
	for (int index = 1; str[index+1] = '\0'; index++)
	{
		printf("%c", str[index (index%2) + (len%2)]);
	}	
	printf("%c", str[len 1 (len+1)%2]);
	return 0;
}
'''



a=input()
l=len(a)
print(a[l%2],end="")
for i in range(1,l-1):
	print(a[i-(i%2)+(l%2)],end="")
print(a[l-1-(l+1)%2],end="")