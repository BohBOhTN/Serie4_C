#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note1,note2,moyenne;
    int coif_1,coif_2,somme_coif;
    do{
        printf("Donner la premiere note \n");
        scanf("%f",&note1);
    }while(!(note1>=0 && note1<=20));
    do{
        printf("Donner le coiff de la premier matiere \n");
        scanf("%d",&coif_1);
    }while(!(coif_1>=1 && coif_1<=5));
    do{
        printf("Donner la deuxieme note \n");
        scanf("%f",&note2);
    }while(!(note2>=0 && note2<=20));
    do{
        printf("Donner le coiff de la deuxieme matiere \n");
        scanf("%d",&coif_2);
    }while(!(coif_2>=1 && coif_2<=5));
    printf("%.2f \n",note1);
    printf("%.2f \n",note2);
    somme_coif = coif_1 + coif_2 ;
    printf("somme coif= %d\n",somme_coif);
    moyenne =((note1 * coif_1) + (note2 * coif_2))/ somme_coif ;
    printf("La moyenne est %.2f ",moyenne);

    return 0;
}
