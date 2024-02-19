/*
The program must accept an integer N as the input. The program must find the factors of N and print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
	1 <= N <= 1000

Input Format:
	The first line contains N.

Output Format:
	The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		6
	Output:	
		1 1 1 1 1 1 1
		1 2 2 2 2 2 1
		1 2 3 3 3 2 1
		1 2 3 6 3 2 1
		1 2 3 3 3 2 1
		1 2 2 2 2 2 1
		1 1 1 1 1 1 1

Example Input/Output 2:
	Input:
		7
	Output:
		1 1 1
		1 7 1
		1 1 1
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	int n; 
	cin>>n;
	vector<int> fact;
	for(int i=1;i<=n;i++)
	{ 
		if(n%i==0)
		{
			fact.push_back(i);
		}
	}
	int l=fact.size();
	l*=2;
	l--;
	for(int i=1;i<=1;i++)
	{
		for(int j=1;j<=1;j++)
		{
			int dist=min(i,min(j,min(l-i+1,1-j+1)));
			cout<<fact[dist-1]<<“ “;
		}
		cout<<endl;
	}
}
