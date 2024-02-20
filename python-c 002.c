/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

# Length of stri and str2 are always less than or equal to 100

	stri = input()
	str2= input()
	for ch in stri:
		if not ch in str2: 
			print(ch, end=" ") 
			break
	else:
		print(-1)
*/


//answer

#include<stdio.h> 
#include<stdlib.h>
int main()
{
	char a[100],b[100];
	scanf("%s\n%s",a,b);
	int m;
	for (int i=0;i<strlen(a);i++)
	{
		m=1;
		for (int j=0;j<strlen(b);j++)
		{
			if(a[i]==b[j]) 
			{
				m=0; 
				break;
			}
		}
		if(m)
		{
			printf("%c", a[i]);
			break;
		}
	}
	if(m) 
		printf("-1");
}