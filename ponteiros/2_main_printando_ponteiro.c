#include <stdio.h>

int main()
{
    int x;
    int *ptr;
    ptr = &x;
    printf("O endereço de X é: %p\n", ptr);
    return 0;
}
