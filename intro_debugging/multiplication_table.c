#include <stdio.h>

void print_table(int size)
{
    int col;
    int row;

    col = 1;

    while (col <= size)
    {
        row = 1;

        while (row <= size)
        {
            printf("%d ", row * col);
            ++row;
        }
        ++col;
        printf("\n");
    }
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    print_table(4);
    return 0;
}
