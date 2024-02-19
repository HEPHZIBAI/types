'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
	1 <= N <= 26

Input Format: 
	The first line contains N.

Output Format:
	The first N lines contain the desired pattern as shown in the Example Input/Output section

Example Input/Output 1:
	Input
		4

Output
	ab
	a
	abcd
	abc

Example Input/Output 2: 
	Input: 
		7
	Output:
		ab
		a
		abcd
		abc
		abcdef
		abcde
		abcdefgh
'''


n=int(input()) 
k=2
a="abcdefghijklmnopqrstuvwxyz" 
while(n>0):
	print(a[:k])
	n-=1
	if(n>0):
		print(a[:k-1]) 
		n-=1
	else:
		break
	k+=2