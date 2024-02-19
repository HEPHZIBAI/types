'''
Please convert the following C code to Python so that the Python program executes successfully passing the test cases.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N; 
	scanf("%i", &N); 
	printf("%i", N); 
	return 0;
}

'''

n=input().strip()
l=len(n)-1
s=0
h=1
j={'a':10 , 'A':10 , 'b':11 , 'B':11 , 'c':12 , 'C':12 , 'd':13 , 'D':13 , 'e':14 , 'E':14 , 'f':15 , 'F':15 }
if(n[0]=='0' and (n[1]!=x') and n[1]!='X'):
	while(l>=0):
		s=s+(int(n[l])*h)
		h*=8
		l-=1
elif(n[0]=='0' and (n[1]=='x') or n[1]=='X'):
	while(l>=2):
		if n[l] in j:
			s+=(h*j[n[l]])
		else:
			s+=(h*int(n[l]))
		h*=16
		l-=1
else:
	s=n
print(s)