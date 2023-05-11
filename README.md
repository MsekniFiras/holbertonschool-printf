# _printf 

A formatted output conversion C program completed as part of the track at Holberton School. The program is a pseudo- recreation of the C standard library function, printf.

## Usage
To use the _printf function, compile all .c files in the repository and include the header main.h with any main function.

Example main.c:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```
This will output the text "Hello, World!" to the terminal, like so:

```
Hello, World!
```
## Current features

Implemented specifiers:

* Decimal integers (%d)
* Strings (%s)
* integers (%i)
* char (%c)

Rountinely, you will want to use printf to print out strings from variables or numbers. We can take in variables passed as further arguments by using %, then flags (optional), then a specifier for the type of thing we are printing. If we have an integer and a string, we will use %d and %s respectively, like so:
```
char str[] = "World";
int number = 47;
_printf("Hello %s %d!", str, number);
```
We will get the output:
```
Hello World 47!
```
## %

A % is written. No argument is converted. The complete conversion specification is %%.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
## Author

* Firas Msekni
