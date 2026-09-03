#include <stdio.h>
int main() {
    printf("Enter Number 1:");
    float num1;
    scanf("%f",&num1);
    printf("\nEnter Number 2:");
    float num2;
    scanf("%f", &num2);
    printf("\nSelect from the Options:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nPlease Enter your choice(1,2,3,4): ");
    int ch;
    scanf("%d", &ch);
    switch(ch) {
        case 1: 
        float add = num1 + num2;
        printf("\nAnswer: %.2f", add);
        break;
        case 2:
        float sub = num1 - num2;
        printf("\nAnswer: %.2f", sub);
        break;
        case 3:
        float multi = num1 * num2;
        printf("\nAnswer: %.2f", multi);
        break;
        case 4:
        float div = num1 / num2;
        printf("\nAnswer: %.2f", div);
        break;
        default: 
        printf("\nInvalid Choice.");
    }
    return 0; 
}