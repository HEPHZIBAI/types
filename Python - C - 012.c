/*

Please convert the following Python code to C so that the C program executes successfully passing the test cases.

N = int(input())
numList = [int(val) for val in input().split()]
newList = list(map(lambda X: X*2 if X % 2 == 0 else X**2,newList))
print(*newList)

*/


#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int numList[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &numList[i]);
        if (numList[i] % 2 == 0) 
            numList[i] *= 2;
        else 
            numList[i] = numList[i] * numList[i];
        printf("%d ", numList[i]);
    }
    return 0;
}