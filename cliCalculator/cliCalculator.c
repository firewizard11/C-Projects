#include <stdio.h>

int main() {
    float op1, op2, result;
    int operation;

    printf("====== Menu ======\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\nPick an Operation: ");
    scanf("%d", &operation);

    printf("====== Operands ======\nEnter Operand 1: ");
    scanf("%f", &op1);
    printf("Enter Operand 2: ");
    scanf("%f", &op2);

    if (operation == 4 && op2 == 0) {
        printf("Don't try to divide by 0!\n");
        return 1;
    }

    printf("====== Result ======\n");
    switch (operation) {
        case 1:
            result = op1 + op2;
            printf("Result: %f\n", result);
            break;
        case 2:
            result = op1 - op2;
            printf("Result: %f\n", result);
            break;
        case 3:
            result = op1 * op2;
            printf("Result: %f\n", result);
            break;
        case 4:
            result = op1 / op2;
            printf("Result: %f\n", result);
            break;
        default:
            printf("Pick a valid Operation!\n");
            return 1;
    }

    return 0;
}