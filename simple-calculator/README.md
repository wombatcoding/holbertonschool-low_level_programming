Project: to construct a basic calculator in C language. Without the assistance of GePeTto.
Challenge accepted.

Compile command with exact flags:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

Run instructions:
Run ./calculator in a terminal. Or just run. In any direction of away.

Supported operations:
Multiplication
Division
Addition
Subtraction

Numeric behavior (integer vs decimal)
Due to time constraints I kept to integer variables for this task.
Given more time and understanding I would choose the double data type for increased precision.

Known limitations:
Reduced mathematic precision based on chosen data type.
While the calculator rejects most invalid input, it doesn't solve for a mixed input.
For example: 1337haxxor would only return 1337, retain haxxor, try again with haxxor,
resulting in another invalid response message before prompting for a new input.