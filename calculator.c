#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_number1(void);
float get_number2(void);
char get_operation(void);
float calculate(float n1, float n2, char operation);
void print_result(float result, char operation, float n2);

int main (void){
    float n1 = get_number1();
    float n2 = get_number2();
    char operation = get_operation();
    float result = calculate(n1, n2, operation);
    print_result(result, operation, n2);

}


float get_number1(void) {
    float number;
        printf("Enter a first number: ");
        scanf("%f", &number);
        return number;
}

float get_number2(void){
    float number;
        printf("Enter a second number: ");
        scanf("%f", &number);
        return number;
}

char get_operation(void){
    char operation;
    do {
        printf("Enter an valid operation: ");
        scanf(" %c", &operation);
    } while (operation != '+' && operation != '-' && operation != '*' && operation != '/');
    return operation;
}

float calculate(float n1, float n2, char operation) {
    if (operation == '+'){
        return n1 + n2;
    } else if (operation == '-'){
        return n1 - n2;
    } else if (operation == '*'){
        return n1 * n2;
    } else if (operation == '/' && n2 != 0){
        return n1 / n2;
    } else if (operation == '/' && n2 == 0){
        return 0;
    } else {
        return 0;
    }
}

void print_result(float result, char operation, float n2){
    if (operation == '+'){
        printf("The sum is: %.2f\n", result);

    } else if (operation == '-'){
        printf("The subtraction is: %.2f\n", result);

    } else if (operation == '*'){
        printf("The multiplication is: %.2f\n", result);

    } else if (operation == '/' && n2 != 0){
        printf("The division is: %.2f\n", result);

    } else {
        printf("Invalid operation\n");
    }
}