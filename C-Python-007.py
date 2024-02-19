'''
Please convert the following C code to Python so that the Python program executes successfully passing the test cases.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	scanf("%d", &N);
	char num[12];
	num[0] = '0';
	sprintf(&num[1], "%d", N);
	sscanf(num, "%1", &N);
	printf("%d", N);
	return 0;
}
'''

a=input().strip()
a=a[::-1]
s=0
h=1
for i in a:
	m=int(i)*h
	s+=m
	h*=8

print(s)