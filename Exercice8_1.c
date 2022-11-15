#include <stdio.h>

int main()
{
    int n,i,j;
    do{
        printf("Donner Un nombre de ligne");
        scanf("%d",&n);
    }while(!(n>=5 && n<=20));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
