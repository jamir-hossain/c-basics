#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Relational operations
    int isEqual = (num1 == num2);
    int isNotEqual = (num1 != num2);
    int isGreater = (num1 > num2);
    int isLess = (num1 < num2);
    int isGreaterOrEqual = (num1 >= num2);
    int isLessOrEqual = (num1 <= num2);

    // Printing results
    printf("%d == %d: %d\n", num1, num2, isEqual);
    printf("%d != %d: %d\n", num1, num2, isNotEqual);
    printf("%d > %d: %d\n", num1, num2, isGreater);
    printf("%d < %d: %d\n", num1, num2, isLess);
    printf("%d >= %d: %d\n", num1, num2, isGreaterOrEqual);
    printf("%d <= %d: %d\n", num1, num2, isLessOrEqual);

    return 0;
}