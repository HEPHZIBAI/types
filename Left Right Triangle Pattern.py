'''
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
	1 <= Length of S <= 1000

Input Format:
	The first line contains S.

Output Format:
	The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		skillrack
	Output:
		skillrack
		*killrac*
		**illra**
		***llr***
		****l****
		***llr***
		**illra**
		*killrac*
		skillrack

Example Input/Output 2:
	Input
		logics
	Output
		logics
		*ogic*
		**gi**
		*ogic*
		logics
'''

a=input().strip()
m=0
n=len(a)
for i in range((len(a)//2)): 
	print('*'*m, end="")
	print(a[m:n], end="") 
	print('*'*m) 
	m+=1 
	n-=1

if(len(a)%2==0): 
	m-=2 
	n+=2 
	h=(len(a)//2)-1
else: 
	h=Len(a)//2

for i in range(h): 
	print("*"*m, end="") 
	print(a[m:n], end "")
	print("*"*m)
	m-=1
	n+=1

if(len(a)%2!=0): 
	print(a)
