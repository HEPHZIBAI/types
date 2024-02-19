/*
https://www.hackerrank.com/contests/hope-70-days-challenge/challenges/printing-pattern-2/problem





Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

               
Input Format

	The input will contain a single integer .

Constraints
	
Example Input/Output 1:
	Input:
		2
	Output:
		2 2 2
		2 1 2
		2 2 2
Example Input/Output 2:
	Input:
		5
	Output:
	5 5 5 5 5 5 5 5 5 
	5 4 4 4 4 4 4 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 2 1 2 3 4 5 
	5 4 3 2 2 2 3 4 5 
	5 4 3 3 3 3 3 4 5 
	5 4 4 4 4 4 4 4 5 
	5 5 5 5 5 5 5 5 5

Example Input/Output 3:
	Input:
		7
	Output:
		7 7 7 7 7 7 7 7 7 7 7 7 7 
		7 6 6 6 6 6 6 6 6 6 6 6 7 
		7 6 5 5 5 5 5 5 5 5 5 6 7 
		7 6 5 4 4 4 4 4 4 4 5 6 7 
		7 6 5 4 3 3 3 3 3 4 5 6 7 
		7 6 5 4 3 2 2 2 3 4 5 6 7 
		7 6 5 4 3 2 1 2 3 4 5 6 7 
		7 6 5 4 3 2 2 2 3 4 5 6 7 
		7 6 5 4 3 3 3 3 3 4 5 6 7 
		7 6 5 4 4 4 4 4 4 4 5 6 7 
		7 6 5 5 5 5 5 5 5 5 5 6 7 
		7 6 6 6 6 6 6 6 6 6 6 6 7 
		7 7 7 7 7 7 7 7 7 7 7 7 7 
*/





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n;
    scanf("%d", &n);
    for(int i=1;i<2*n;i++)
    {
        for(int j=1;j<2*n;j++)
            if(abs(n-i)>abs(n-j))
                printf("%d ",abs(n-i)+1);
            else
                printf("%d ",abs(n-j)+1);
        
        printf("\n");
    }
}