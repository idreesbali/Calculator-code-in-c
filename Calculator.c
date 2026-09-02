#include <stdio.h>
int main() {
    printf("Enter Number 1:");
    float num1;
    scanf("%f",&num1);
    printf("\nEnter Number 2:");
    float num2;
    scanf("%f", &num2);
    Printf("\nSelect from the Options:\n1. Addition");
    int ch;
    switch(ch) {
        case 1: 
        float add = num1 + num2;
        printf("Answer: %.2f", add);
    }
}