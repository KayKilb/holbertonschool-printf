<h1> _Printf project</h1></p>

<h3> Description</h3>
<p>printf is a well known function used in C programming to do formated printing.
Usually it only takes the standard library <stdio.h> to call it into a c program,
and using it for simple strings or formatted specifiers that allow us to print different
types of data. This time we are presenting a printf project made from scratch in most
of its features in order to understand the complexity of a powerful tool. You can see
man 3 printf to understand how _printf works.</p>

<h3> Compilation</h3>

```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c```

<h3> Prototype</h3>
```
int _printf(const char *format, ...)
```

<h3>Return</h3>
If everything is successful the function returns the number of characters printed.

<h3>Formats</h3>

| Specifiers | Description |
| :----------- | :----------- |
| %c  | Print single character |
| %s  | Print string of characters |
| %d  | Print decimal numbers |
| %i  | Print integers |

<h3>Project files</h3>

| File | Description |
| :----------- | :----------- |
| [main.h](https://github.com/krisCrossApplesauce/holbertonschool-printf/blob/main/main.h) | **Header file**<br>Include all  function prototypes<br> Include structure of specifiers |
| [_printf.c](https://github.com/krisCrossApplesauce/holbertonschool-printf/blob/main/_printf.c) | **Project function: _printf** <br> Start the variadic list.<br> Iterates string  format  of entry and check for a module symbol (%) . If  the symbol is found then check if the next char matches with one of the valid specifiers in the structure using the auxiliar function to comapare ( comp), in that case the respective function of these format is called.<br> For the characters that don't match any of the formats the function ignores the module symbol and prints it as a string.<br> In case that the module symbol is not found, print the each character normally.|
| [spec_funcs.c](https://github.com/krisCrossApplesauce/holbertonschool-printf/blob/main/spec_funcs.c) | **Auxiliar functions**<br> putchar: using write function, prints a character<br> print_char: print character using list variable.<br> print_str: print strings, if string is null it prints (null)<br> print_int: prints an int. |

<h3>Contributors</h3>

Karis Richardson - [@krisCrossApplesauce](https://github.com/krisCrossApplesauce)<br>
Kaylene Kilbourn - [@KayKilb](https://github.com/KayKilb)<br>
