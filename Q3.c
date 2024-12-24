#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number >= 100 && number <= 999) {
        first_digit = number / 100;  
        last_digit = number % 10;   
        sum = first_digit + last_digit; 
        printf("The sum of digits is: %d\n", sum);
    } else {
        printf("invalid number.\n");
    }
}
