//Team with Ahmed

#include <stdio.h>

static void print_hex(unsigned int value)
{
    const char digits[] = "0123456789abcdef";

    if (value >= 16)
        print_hex(value / 16);
    putchar(digits[value % 16]);
}

void Int_To_Hex(int n)
{
    unsigned int value = (unsigned int)n;

    if (n < 0) {
        putchar('-');
        value = 0u - value;
    }
    print_hex(value);
}

int main(void)
{
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
        return 1;

    Int_To_Hex(n);
    putchar('\n');
    return 0;
}