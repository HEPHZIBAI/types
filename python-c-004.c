/*
Please convert the following Python code to C so that the C program executes successfully passing the test cases.

strval = input()
X = int(input())
strlen = len(strVal) print(((strval[::-1] + strVal) * (X // (strLen * 2) + 1))[:X])
*/



#include <stdio.h>
#include <string.h>

int main() {
    char strVal[1000];
    scanf("%s", strVal);

    int X;
    scanf("%d", &X);

    int strLen = strlen(strVal);
    int repetitions = X / (strLen * 2) + 1;

    char result[1000];
    int resultIndex = 0;

    for (int i = repetitions - 1; i >= 0; i--) {
        for (int j = strLen - 1; j >= 0; j--) {
            result[resultIndex++] = strVal[j];
        }
        for (int j = 0; j < strLen; j++) {
            result[resultIndex++] = strVal[j];
        }
    }

    result[X] = '\0';
    printf("%s\n", result);

    return 0;
}