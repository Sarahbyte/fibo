// prompts user to enter a number 'x' then prints 'x' amount of fibonacci numbers.
#include <stdio.h>

void main(void)
{
    int num1 = 0;
    int num2 = 1;
    int user_num;
    printf("Enter a number to compute the fibonacci sequence: ");
    scanf("%d", &user_num);

    for (int i = 0; i < user_num; i++) {
        if (i == 0 || i == 1) {
            printf("%d\n", i);
            continue;
        }
        int num3 = num1+num2;
        printf("%d\n", num3);
        num1 = num2;
        num2 = num3;
    }

}
