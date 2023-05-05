#include <stdarg.h>
#include <stdio.h>

int _printf(const char format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    for (const charp = format; p; p++) {
        if (p != '%') {
            putchar(p);
            count++;
            continue;
        }

        switch ((++p)) {
            case 'c':
                putchar(va_arg(args, int));
                count++;
                break;
            case 's':
                for (const char s = va_arg(args, const char); s; s++) {
                    putchar(s);
                    count++;
                }
                break;
            case '%':
                putchar('%');
                count++;
                break;
            default:
                // unsupported conversion specifier
                break;
        }
    }

    va_end(args);
    return count;
}
