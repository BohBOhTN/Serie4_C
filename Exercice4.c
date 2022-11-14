#include <stdio.h>
#include <stdlib.h>

int main()
{   int nb,inverse,reste,nb_origin;

    do{
        printf("Donner un entier positife ");
        scanf("%d", &nb);
    }while(!(nb>0));
    nb_origin = nb;
    inverse = 0;
    while (nb != 0) {
    reste = nb % 10;
    inverse = inverse * 10 + reste;
    nb /= 10;
  }
    printf("l'inverse de %d est egal a %d",nb_origin, inverse);
    return 0;
}
