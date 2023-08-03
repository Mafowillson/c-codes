#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("The fibonacci sequence for the first %d terms are: \n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}