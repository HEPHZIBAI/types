'''
Please convert the following C code to Python so that the python program executes successfully passing the test cases.

#include <stdio.h> 
#include <stdlib.h>
int main()
{
	char exp[101], ope; 
	scanf("%s", exp);
	int index =0, offset, val; 
	sscanf(exp+index, "%d%n", &val, &offset); 
	index+=offset;
	while(sscanf(exp+index, "%c%d%n", &ope, &val, &offset) == 2) 
	{
		if (ope!='+' && ope != '-'&& ope!='*'&& ope != '/')
		{
			printf("Invalid Expression");
			return 0;
		}
		index+= offset;
	}
	printf("Valid Expression");
	return 0;
}
'''


#answer

s=input().strip()
if(all([(i.isdigit() or i in ['+' ,'-','*','/']) for i in s])):
	print("Valid Expression") 
else: 
	print("Invalid Expression")

