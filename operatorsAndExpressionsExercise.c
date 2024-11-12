#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("|------ Math Validation ------\n| \n");
    printf("| Please, give me a number: ");
    scanf("%d", &num1);
    printf("| Please, give me a number: ");
    scanf("%d", &num2);
    printf("| Please, give me a number: ");
    scanf("%d", &num3);

    printf("|---------- Result -----------\n");
    printf("| Sum: %d\n", (num1 + num2 + num3));
    printf("| Subtraction: %d\n", (num1 - num2 - num3));
    printf("| Multiplication: %d\n", (num1 * num2 * num3));
    printf("| Division: %d\n", (num1/num2/num3));
    printf("| \n");
    if(num1 > num2) {
        printf("| First number is more bigger then second.\n");
    } else {
        printf("| First number is not more bigger then second.\n");
    }

    if(num2 > num3) {
        printf("| Second number is more bigger then third.\n");
    } else {
        printf("| Second number is not more bigger then third.\n");
    }

    if((num1 >= 0) && ((num2 % 2) == 0)) {
        printf("| The first number is positive and the second is even.\n");
    } else if ((num1 < 0) && ((num2 % 2) == 0)) {
        printf("| The first number is not positive, but the second is even.\n");
    } else if ((num1 >= 0) && ((num2 % 2) == 0)) {
        printf("| The first number is positive, but the second is not even.\n");
    } else {
        printf("| The first number is not positive and the second is not even.\n");
    }
    printf("|\n| by Joao Pedro O. Braga\n");
    printf("|----------------------------\n");


    return 0;

}