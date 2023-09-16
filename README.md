## Implementation of a customized printf function
The project _printf is an adaptation of C standard library's printf function
designed to format and display text on the console or in a terminal

# Synopsis:
```
#include "main.h"

int _printf(const char *format, ...);
```

# Description
_printf takes in a string of characters to be printed in the simplest case
```
_printf ("abc");
```

Double quotes denote the beginning and end of the string.

**Format Specifications**
_printf is capable of printing formatted text by providing a list of otional
arguments after the string of characters.
The arguments can be values or variables whose values will be printed.

The arguments provided can be formatted using 'format specifiers' embedded
within the string of characters. Format specifiers are usually denoted with
a `%` symbol followed by one of a given set of characters that represents the
particular format in which the value is to be formatted.

- `%c`: denotes that a given argument is a character and writes it to stdout
as such. 
- `%s`: denotes that a given argument is a string and writes it to stdout as
such
- `%d`: denotes that a given argument is a decimal and writes it to stdout as
such
- `%i`: denotes that a given argument is an integer and writes it to stdout as
such
- `%%`: escapes the '%' symbol

_printf writes the formatted output to 'stdout', the standard output stream,
and returns the number of characters printed (excluding the null byte used to
end output to strings).
