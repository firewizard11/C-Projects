#include <stdio.h>

float FtoC(float original);
float CtoF(float original);

int main() {
    int option;
    float original, result;

    printf("====== Menu ======\n1) Celcius -> Fahrenheit\n2) Fahrenheit -> Celcius\nPick an Option: ");
    scanf("%d", &option);

    if (option != 1 && option != 2) {
        printf("Pick a valid option!\n");
        return 1;
    }

    printf("====== Original ======\nEnter the Original Value: ");
    scanf("%f", &original);

    if (option == 1) {
        result = CtoF(original);
        printf("====== Result ======\nFahrenheit: %.2f\n", result);
        return 0;
    }

    if (option == 2) {
        result = FtoC(original);
        printf("====== Result ======\nCelcius: %.2f\n", result);
        return 0;
    }
}


float CtoF(float original) {
    float result;

    result = original * 9;
    result /= 5;
    result += 32;

    return result;
}


float FtoC(float original) {
    float result;

    result = original - 32;
    result *= 5;
    result /= 9;
    
    return result;
}