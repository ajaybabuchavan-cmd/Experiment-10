//Ajay Babu Chavan,UIN:-251P081,Year:-F.E,Division:-D Exp;-10A
#include <stdio.h>

int addNumbers(int *a, int *b) {
    int sum = *a + *b;
    return sum;
}

int main() {
    int num1, num2;

    printf("Enter the number: ");
    scanf("%d %d", &num1, &num2);
    printf("Result is: %d", addNumbers(&num1, &num2));

    return 0;
}