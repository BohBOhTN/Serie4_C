#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,u,c,d;
    do{
        printf("Donner un entier de 3 chiffres \n");
        scanf("%d",&nb);
    }while(!(nb>=100 && nb<=999));
    u = nb % 10;
    d = (nb/10) % 10;
    c = nb / 100;

    if((u*u*u)+(d*d*d)+(c*c*c)==nb){
        printf("le nombre %d est cubique \n",nb);
    }else
        printf("le nombre %d n'est pas cubique \n",nb);
    return 0;
}
