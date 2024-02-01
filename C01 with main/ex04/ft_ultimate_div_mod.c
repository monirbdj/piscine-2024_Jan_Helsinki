#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void)
{
    int a = 5;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);
    printf("%d" "\n" "%d", a, b);
    return 0;
}
