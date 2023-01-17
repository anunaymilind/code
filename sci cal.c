#include <stdio.h>
#include <math.h>

int main(void) {
    double num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operation (+, -, *, /, ^, s for sin, c for cos, t for tan, l for log, e for exp): ");
    scanf(" %c", &operation);

    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 's':
            result = sin(num1);
            break;
        case 'c':
            result = cos(num1);
            break;
        case 't':
            result = tan(num1);
            break;
        case 'l':
            result = log10(num1);
            break;
        case 'e':
            result = exp(num1);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    printf("Result: %lf\n", result);

    return 0;
}
