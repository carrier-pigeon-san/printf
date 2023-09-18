#include "main.h"
#include <stdarg.h>
#include <unistd.h> // for write()

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list args;
    // Initialize va_list
    va_start(args, format);

    // Loop through the format string
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            // Handle format specifiers
            i++;
            if (format[i] == 'c') {
                // Handle %c
                char c = va_arg(args, int); // char gets promoted to int in varargs
                write(1, &c, 1); // Print the character to stdout
                printed_chars++;
            } else if (format[i] == 's') {
                // Handle %s
                char *str = va_arg(args, char *);
                for (int j = 0; str[j] != '\0'; j++) {
                    write(1, &str[j], 1);
                    printed_chars++;
                }
            } else if (format[i] == '%') {
                // Handle %%
                write(1, "%", 1);
                printed_chars++;
            }
        } else {
            // Regular character, just print it
            write(1, &format[i], 1);
            printed_chars++;
        }
    }

    // Clean up the va_list
    va_end(args);

    return printed_chars;
}

