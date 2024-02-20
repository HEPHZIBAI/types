/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

N = int(input())
numList=list(map(int, input().split()))
numList=sorted(numlist, key=lambda num:bin(num).count("1"))
print(*numList)
*/


#include<stdio.h>
#include<stdlib.h>

int cmp(int x)
{
	int c = 0;
	while(x)
	{
		c = (x & 1);
		x >>= 1;
	}
	return c;
}

int compare(const void *a, const void *b)
{
	int ca=cmp((int*)a);
	int cb=cmp((int*)b);
	return ca-cb;
}

int main()
{
	int n;
	scanf("%d\n", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{	
		scanf("%d ", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
}