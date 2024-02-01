#include <stdio.h>
#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int    main(void)
{
    int a;
    int b;
    int div;
    int mod;
    
    a = 5;
    b = 2;


        
    ft_div_mod(a, b, &div, &mod);
    printf("the vlaue of div is %d" "\n" "the value of mod is %d", div, mod);
    
    return 0;
}
