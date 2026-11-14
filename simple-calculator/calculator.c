#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* calculator - a simple calculator permitting +, -. *, and /
*/

int main(void)
{
    int menu[1];
/*    int input[8];   RESTORE WHEN CALCULATOR FUNCTIONS PROTOTYPED  */

        /* Options menu*/
    do {
        printf("\nWelcome to the basic Calculator\n\n\n");
        printf("Please select from options 1, 2, 3, 4, or select 0 to quit\n\n\n");

        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n\n");

    /*Menu input conditionals*/

        scanf("%d", menu);
            if (*menu == 1)
            {
                printf("Placeholder text for Add function\n\n");
            }
            else if (*menu == 2)
            {
                printf("Placeholder text for Subtract function\n\n");
            }
            else if (*menu == 3)
            {
                printf("Placeholder text for Multiple function\n\n");
            }
            else if (*menu == 4)
            {
                printf("Placeholder text for Divide function\n\n");
            }
            else if (*menu == 0)
            {
                printf("Bye!\n\n");
                exit(0);
            }
            else
            {
                printf("Invalid choice\n\n");
            }
    } while (*menu != 0);
    printf("\n\n");
	return(0);
}
