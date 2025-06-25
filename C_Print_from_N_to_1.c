#include <stdio.h>

void print_number(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("%d", n);
    if(n>1)
    {
        printf(" ");
    }
    print_number(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_number(n);
    return 0;
}