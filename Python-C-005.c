/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

#Length of strval is always Less than or equal to 100 

strval = input().strip()
vowels = "aeiou"
consonants = "BCDFGHJKLMNPQRSTVWXYZ"
printed=False
for ch in strval:
	if (not ch in vowels) and (not ch in consonants): 
		print(ch, end="") 
		printed=True

if not printed: 
	print(-1)
*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{
	char a[1000]; 
	scanf("%s",a);
	int m=1;
	for (int i=0;i<strlen(a);i++)
	{
		if(islower(a[i]))
		{
			if(a[i]='a' && a[i]='e' && a[i]='i' && a[i]) ='o' && a[i]='u')
			{
				printf("%c", a[i]);
				m=0;
			}
		}
		else
		{
			if(a[i]=='A' ||a[i]==''||a[i]=='I'||a[i] =='0' || a[i]='U' || isalpha(a[i]))
				{
					printf("%c",[1]); 
					m=0;
				}
		}
		if(m)
			printf("-1");
}