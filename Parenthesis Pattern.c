/*
The program must accept a string $ as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
	1 < Length of S <= 1000

Input Format:
	The first line contains S.

Output Format:
	The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input: 
		SkillRack
	Output:
		(S)killRac(k)
		S(k)illRa(c)k
		Sk(i)||R(a)ck
		Ski(1)|(R)ack 
		Skil(1)Rack

Example Input/Output 2:
	Input: 
		hide
	Output:
	(h)id(e) 
	h(i)(d)e
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[1000]; 
	scanf("%s",a); 
	int x=0,y-strlen(a)-1;
	while(x<=y)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(i==x||i==y) 
				printf("(%c)",a[i]); 
			else 
				printf("%c",a[i]);
		} 
		printf("\n");
		x++;
		y--;
	}
}
