#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b) {
    if (!b) return 0;

    unsigned int n = 0;
    while (*b) {
        if (*b != '0' && *b != '1') return 0;
        n = (n << 1) + (*b++ - '0');
    }
    return n;
}
