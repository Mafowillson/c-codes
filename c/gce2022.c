#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void initialise(int tab[], int n)
{
    int i;
    for(i = 1; i < n; i++)
    {
        tab[i-1] = i;
    }
}
bool verifyprime(int x)
{
    return x != 0;
}
void setzero(int tab[], int n, int y)
{
    int i = 0, j;
    for(i = 0; i < n; i++)
    {
        if(tab[i] == y)
        {
            break;
        }
    }
    for(int j = i + 1; j < n; j++)
    {
        if(tab[j] % tab[i] == 0)
        {
            tab[j] = 0;
        }
    }
}
void dodisplay(int tab[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(tab[i] != 0)
        {
            printf("%d\t", tab[i]);
        }
    }
}
int main()
{
    int n ;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("The prime number from 1 to %d are: \n",n);
    int tab[n];
    int rootn, i, prime;
    rootn = ceil(sqrt(n));
    initialise(tab, n);
    tab[0] = 0;
    for(i = 1; i < n; i++)
    {
        if(!verifyprime(tab[i]))
        {
            continue;
        }
        prime = tab[i];
        if(prime > rootn)
        {
            break;
        }
        setzero(tab, n, prime);       
    }
 
    dodisplay(tab, n);

     return 0;
}