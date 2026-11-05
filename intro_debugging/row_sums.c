#include <stdio.h>

int row_sum(int row, int cols)
{
    int c;
    int sum = 0;
    c = 1;

    while (c <= cols)
    {
        sum += row * c;
        c++;
    }

    return sum;
}


int total_sum(int rows, int cols)
{
    int r;
    int total = 0;
    int current = 0;
    r = 1;

    while (r <= rows)
    {
        current += row_sum(r, cols);
        total = current;
        r++;
    }

    return total;
}


/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    printf("%d\n", total_sum(3, 3));
    return 0;
}
