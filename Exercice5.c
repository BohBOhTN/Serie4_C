#include <stdio.h>
#include <stdlib.h>
#
int main()
{
    int nb,i,som_divi;
    do{
        printf("Donner un entier positif de trois chiffres au manximum \n ");
        scanf("%d",&nb);
    }while(!(nb>=1 && nb<=999));
    som_divi = 0;
    printf("Les Diviseur propres de %d sont : \n",nb);
    for(i=1 ; i<nb ; i++){
        if(nb % i == 0 ){
            som_divi += i;
            printf("%d \t",i);
        }
    }
    if(som_divi==nb){
        printf("\nLa somme de ses nombre est egal a %d \n",som_divi);
        printf("%d est un nombre parfait \n",nb);
    }else
    if(som_divi != nb){
        printf("\nLa somme de ses nombre est egal a %d \n",som_divi);
        printf("%d n'est pas un nombre parfait \n",nb);
    }

    return 0;
}
