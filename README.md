# Monty Bytecode Interpreter

The Monty Bytecode Interpreter is a program that reads and executes bytecode instructions specified in a file. It implements a stack or queue data structure and provides various operations to manipulate the data.

## Files

The following files are included in this project:

- `char_string_functions.c`: Contains utility functions for handling character strings.
- `mode_switch.c`: Implements the mode switching functionality to toggle between stack and queue modes.
- `monty.c`: Contains the main function and file processing logic of the interpreter.
- `monty_linked_list2.c`: Implements linked list functions specific to the Monty interpreter.
- `stack_functions.c`: Implements stack-related functions, such as push, pop, and swap.
- `strcmp.c`: Implements a custom string comparison function.
- `instruction_functions.c`: Contains implementations of specific bytecode instructions.
- `monty.h`: Header file containing function prototypes and necessary definitions.
- `monty_linked_list.c`: Implements generic doubly linked list functions.
- `stack_arithmetic.c`: Implements arithmetic operations for the stack.
- `stack_operations.c`: Implements additional stack operations.
- `monty`: The compiled executable file.

## Usage

To use the Monty bytecode interpreter, follow these steps:

1. Compile the source files using a C compiler. For example:
   gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty


2. Create a bytecode file containing Monty instructions. For example, `bytecodes/06.m `.

3. Run the interpreter, passing the bytecode file as a command-line argument. For example:
   ./monty bytecodes/06.m 

4. The interpreter will read the bytecode file, execute the instructions, and produce the desired output or perform the specified operations.

## Bytecode Instructions

The Monty bytecode interpreter supports various instructions that can be specified in the input file. Some of the common instructions include:

- `push <value>`: Pushes a value onto the stack or queue.
- `pall`: Prints all the values on the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element from the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`, `sub`, `mul`, `div`, `mod`: Performs arithmetic operations on the top elements of the stack.
- `nop`: Does nothing.
- `pchar`: Prints the character at the top of the stack.
- `pstr`: Prints the string starting at the top of the stack.
- `rotl`: Rotates the stack to the top.
- `rotr`: Rotates the stack to the bottom.
- `stack`: Sets the mode of the interpreter to stack (default).
- `queue`: Sets the mode of the interpreter to queue.

Additionally, the interpreter handles comments in the bytecode file starting with the `#` symbol.

Refer to the `instruction_functions.c` file for more details on each instruction's implementation.

## Development

This Monty bytecode interpreter was developed using the C programming language. It utilizes linked lists and stack/queue data structures to process and execute the bytecode instructions.

## License

This project is licensed under the [MIT License](LICENSE).
