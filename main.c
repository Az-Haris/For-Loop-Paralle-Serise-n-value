#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, n, sum=0;

    printf("Enter n value of serise : 1+2+3+........+n= ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        sum=sum+a;
    }
    printf("1+2+3+.........+n = %d", sum);

    getch();
    return 0;
}
