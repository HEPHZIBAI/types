'''
Please convert the following C code to Python so that the Python program executes successfully passing the test cases.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int X, Y; 
	scanf("%d%d", &x, &Y); 
	char floatval[11];
	double val;
	sprintf(floatVal, "%d.%d", X, Y); 
	sscanf(floatval, "%lf", &val); 
	printf("%.21f", val);
	return 0;
}
'''

x,y=map(str, input().split())
s=x+'.'+y
f=float(s)
print('%.2f'%f)
