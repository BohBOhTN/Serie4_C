#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,u,c,d,i,cubique;
    do{
        printf("Donner un entier composer de 3 chiffres \n");
        scanf("%d",&nb);
    }while(!(nb>=100 && nb<=999));
    for(i=0;i<=nb;i++){
        u=i%10;
        d=(i/10)%10;
        c=i/100;
        cubique = ((u*u*u)+(d*d*d)+(c*c*c));
        if(cubique == i){
            printf("le numero %d est cubique \n",i);
        }
    }
    return 0;
}
