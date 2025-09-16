#include <stdio.h>

int Opciones(int n, int i, int j, int k);

int main(int argc, char const *argv[])
{
    int n, i;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\nNo hay monedas");
        return 0;
    }

    i = ((1 << n)) * n;
    Opciones(n, i, 1,0);

    return 0;
}

int Opciones(int n, int i, int j, int k)
{
    if (i < 1)
    {
        return 0;
    }

    if ((k/(1<<n-j))%2==1)
    {
        printf("A\t");
    }
    else if ((k/(1<<n-j))%2==0)
    {
        printf("S\t");
    }


    j++;
    if (j > n)
    {
        printf("\n");
        j = 1;
        k++;
    }
    
    Opciones(n, i - 1, j,k);
    
    return 0;
}
