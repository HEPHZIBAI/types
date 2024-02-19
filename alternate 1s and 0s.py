'''
The program must accept an integer N as the input. The program must print YES if the binary representation of N contains 1's and O's alternatively. Else the program must print NO as the output.

Boundary Condition(s): 2 <= N <= 10^8

Input Format: 
	The first line contains N.

Output Format:
	The first line contains YES or NO.

Example Input/Output 1:
	Input:
		10
	Output:
		YES
	Explanation:
		The binary representation of 10 is 1010.Here the binary representation of 10 contains 1's and O's alternatively Hence the output is YES.

Example Input/Output 2:
	Input 
		25
	Output
		NO
'''

N = int(input())
_,binN= bin (N).split('b')
flag=0
for i in range(len(binN)-1): 
	if binN[i] == binN[i+1]: 
		flag =-1
		break

if flag ==0:
	print("YES")
else:
	print("NO")