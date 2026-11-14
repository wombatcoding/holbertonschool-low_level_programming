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

    printf("\n\nWelcome to the basic Calculator\n\n\n");
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
            printf("What do you mean you don't like math? No, please don't go!\n\n");
            exit(0);
        }
        else
        {
            printf("By entering a non-option you are contractually obliged to buy James O'Dwyer a cider\n\n");
        }
	return(0);
}
