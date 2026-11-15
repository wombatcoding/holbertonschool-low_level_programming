#include <stdio.h>
#include <stdlib.h>

/**
* calculator - a simple calculator permitting +, -. *, and /
*/

int main(void)
{
    int menu[1];
    int inputA;
    int inputB;

        /* Options menu*/
    do {
        printf("\nWelcome to the basic Calculator\n\n");
        printf("Please select from options 1, 2, 3, 4, or select 0 to quit\n\n");

        printf("1 Add\n");
        printf("2 Subtract\n");
        printf("3 Multiply\n");
        printf("4 Divide\n");
        printf("0 Quit\n\n");

    /*Menu input conditionals*/

        scanf("%d", menu);
            if (*menu == 1) /* Addition */
            {
                printf("\nPlease enter the first value:\n\n");
                scanf("%d", &inputA);
                printf("\nPlease enter the second value:\n\n");
                scanf("%d", &inputB);
                printf("\n%d added to %d is equal to %d\n\n", inputA, inputB, (inputA + inputB));
            }
            else if (*menu == 2) /* Subtraction */
            {
                printf("\nPlease enter the first value:\n\n");
                scanf("%d", &inputA);
                printf("\nPlease enter the second value:\n\n");
                scanf("%d", &inputB);
                printf("\n%d minus %d is equal to %d\n\n", inputA, inputB, (inputA - inputB));
            }
            else if (*menu == 3) /* Multiplication */
            {
                printf("\nPlease enter the first value:\n\n");
                scanf("%d", &inputA);
                printf("\nPlease enter the second value:\n\n");
                scanf("%d", &inputB);
                printf("\n%d times %d is equal to %d\n\n", inputA, inputB, (inputA * inputB));
            }
            else if (*menu == 4) /* Division */
            {
                printf("Placeholder text for Divide function\n\n");
            }
            else if (*menu == 0) /* Exit */
            {
                printf("Bye!\n\n");
                exit(0);
            }
            else /* Invalid */
            {
                printf("Invalid choice\n\n");
            }
    } while (*menu != 0);
    printf("\n\n");
	return(0);
}
