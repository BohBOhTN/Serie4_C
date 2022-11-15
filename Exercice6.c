#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,som_divi,j,i;
    do{
       printf("Donner un entiter positif de quatre chiffres au maximum \n");
       scanf("%d",&nb);
    }while(!(nb>0 && nb<=9999));
    printf("Les nombres parfaits inferieurs ou eggal a %d sont : \n",nb);
    for (i=1;i<=nb;i++){
        som_divi = 0;
        for(j=1;j<i;j++){
            if(i%j==0){
                som_divi += j;
            }
        }if(som_divi == i){
            printf("%d \t",i);
        }
    }
    return 0;
}
