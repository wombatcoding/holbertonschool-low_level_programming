#include <stdio.h>
#include <stdlib.h>

/**
* calculator - a simple calculator permitting +, -. *, and /
*/

int main(void)
{
    int menu;
    int inputA;
    int inputB;
    int check;
    int clear;

    menu = -1;

        /* Options menu*/
    do {
        printf("\nWelcome to the basic Calculator\n\n");
        printf("Please select from options 1, 2, 3, 4, or select 0 to quit\n\n");

        printf("1 Add\n");
        printf("2 Subtract\n");
        printf("3 Multiply\n");
        printf("4 Divide\n");
        printf("0 Quit\n\n");

        check = scanf("%d", &menu);
    /* menu input conditionals */
        if (check == EOF)
        {
            break;
        }
        if (check != 1)
        {
        while ((check = getchar()) != '\n' && check != EOF)
        {
        }
        printf("\nThat was not even a proper number. You owe me a cider. Try again.\n\n");
        continue;
        }
        if (menu == 1) /* Addition */
        {
            /* First number */
            do {
                printf("\nPlease enter the first value:\n\n");
                check = scanf("%d", &inputA);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            /* Second number */
            do {
                printf("\nPlease enter the second value:\n\n");
                check = scanf("%d", &inputB);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            printf("\n%d added to %d is equal to %d\n\n",
                inputA, inputB, (inputA + inputB));
        }
        else if (menu == 2) /* Subtraction */
        {
            /* First number */
            do {
                printf("\nPlease enter the first value:\n\n");
                check = scanf("%d", &inputA);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            /* Second number */
            do {
                printf("\nPlease enter the second value:\n\n");
                check = scanf("%d", &inputB);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            printf("\n%d minus %d is equal to %d\n\n",
                inputA, inputB, (inputA - inputB));
        }
        else if (menu == 3) /* Multiplication */
        {
            /* First number */
            do {
                printf("\nPlease enter the first value:\n\n");
                check = scanf("%d", &inputA);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            /* Second number */
            do {
                printf("\nPlease enter the second value:\n\n");
                check = scanf("%d", &inputB);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            printf("\n%d multiplied by %d is equal to %d\n\n",
                inputA, inputB, (inputA * inputB));
        }
        else if (menu == 4) /* Division */
        {
            /* First number */
            do {
                printf("\nPlease enter the first value:\n\n");
                check = scanf("%d", &inputA);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            /* Second number */
            do {
                printf("\nPlease enter the second value:\n\n");
                check = scanf("%d", &inputB);

                if (check == EOF)
                {
                    return (0);
                }

                if (check != 1)
                {
                    while ((clear = getchar()) != '\n' && clear != EOF)
                    {
                    }
                    printf("\nInvalid number. Try again.\n");
                }
            } while (check != 1);

            if (inputB == 0)
            {
                printf("\nError: division by zero\n");
            }
            else
            {
                printf("\n%d divided by %d is equal to %d\n\n",
                    inputA, inputB, (inputA / inputB));
            }
        }
            else if (menu == 0) /* Exit */
            {
                printf("Bye!\n\n");
                exit(0);
            }
            else /* Invalid */
            {
                printf("Invalid choice\n\n");
            }
    } while (menu != 0);
    printf("\n\n");
	return(0);
}
